//
//  C2DXShareSDK.cpp
//  C2DXShareSDKSample
//
//  Created by 冯 鸿杰 on 13-12-17.
//
//

#include "C2DXShareSDK.h"

#if CC_TARGET_PLATFORM == CC_PLATFORM_IOS

#include "C2DXiOSShareSDK.h"

#elif CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID

#include "ShareSDKUtils.h"

#endif


using namespace cn::sharesdk;

void C2DXShareSDK::open(const char *appKey, bool useAppTrusteeship)
{
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID

    //TODO: Andorid
    initShareSDK(appKey, useAppTrusteeship);

    
#elif CC_TARGET_PLATFORM == CC_PLATFORM_IOS
    
    //TODO: iOS
    C2DXiOSShareSDK::open(appKey, useAppTrusteeship);
    
#endif
}

void C2DXShareSDK::close()
{
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
    
    //TODO: Andorid
    stopSDK();
    
#elif CC_TARGET_PLATFORM == CC_PLATFORM_IOS
    
    //TODO: iOS
    C2DXiOSShareSDK::close();
    
#endif
}

void C2DXShareSDK::setPlatformConfig(C2DXPlatType platType, __Dictionary *configInfo)
{
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
    
    //TODO: Andorid
    // This is not a necessary method for Android, you can setup your platform configs more efficiently in "assets/ShareSDK.xml"
    // setPlatformDevInfo((int)platType, configInfo);
    
#elif CC_TARGET_PLATFORM == CC_PLATFORM_IOS
    
    //TODO: iOS
    C2DXiOSShareSDK::setPlatformConfig(platType, configInfo);
    
#endif
}

void C2DXShareSDK::authorize(C2DXPlatType platType, C2DXAuthResultEvent callback)
{
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
    
    //TODO: Andorid
    doAuthorize((int)platType, callback);
    
#elif CC_TARGET_PLATFORM == CC_PLATFORM_IOS
    
    //TODO: iOS
    C2DXiOSShareSDK::authorize(platType, callback);
    
#endif
}

void C2DXShareSDK::cancelAuthorize(C2DXPlatType platType)
{
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
    
    //TODO: Andorid
    removeAccount((int)platType);
    
#elif CC_TARGET_PLATFORM == CC_PLATFORM_IOS
    
    //TODO: iOS
    C2DXiOSShareSDK::cancelAuthorize(platType);
    
#endif
}

bool C2DXShareSDK::hasAutorized(C2DXPlatType platType)
{
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
    
    //TODO: Andorid
    return isValid((int)platType);
    
#elif CC_TARGET_PLATFORM == CC_PLATFORM_IOS
    
    //TODO: iOS
    return C2DXiOSShareSDK::hasAutorized(platType);
    
#endif
    
    return false;
}

void C2DXShareSDK::getUserInfo(C2DXPlatType platType, C2DXGetUserInfoResultEvent callback)
{
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
    
    //TODO: Andorid
    showUser((int)platType, callback);
#elif CC_TARGET_PLATFORM == CC_PLATFORM_IOS
    
    //TODO: iOS
    C2DXiOSShareSDK::getUserInfo(platType, callback);
    
#endif
}

__Dictionary* C2DXShareSDK::getAuthInformation(C2DXPlatType platType)
{
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID

    //TODO: Andorid
    //return getAuthInfo((int)platType);
    return getAuthInfo((int)platType);
#elif CC_TARGET_PLATFORM == CC_PLATFORM_IOS

    //TODO: iOS


#endif
}

void C2DXShareSDK::shareContent(C2DXPlatType platType, __Dictionary *content, bool isSSO, C2DXShareResultEvent callback)
{
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
    
    //TODO: Andorid
    doShare((int)platType, content, isSSO, callback);
    
#elif CC_TARGET_PLATFORM == CC_PLATFORM_IOS
    
    //TODO: iOS
    C2DXiOSShareSDK::shareContent(platType, content, callback);
    
#endif
}

void C2DXShareSDK::oneKeyShareContent(__Array *platTypes, __Dictionary *content, bool isSSO, C2DXShareResultEvent callback)
{
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
    
    //TODO: Andorid
    multiShare(platTypes, content, isSSO, callback);
    
#elif CC_TARGET_PLATFORM == CC_PLATFORM_IOS
    
    //TODO: iOS
    C2DXiOSShareSDK::oneKeyShareContent(platTypes, content, callback);
    
#endif
}

void C2DXShareSDK::showShareMenu(__Array *platTypes, __Dictionary *content, C2DXShareResultEvent callback)
{
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
	//The theme parameters mainly set the style of the interface,You can choose two "skyblue" or "classic" style
	const char* theme = "classic";
    //TODO: Andorid
    onekeyShare(0, content, theme, callback);
    
#elif CC_TARGET_PLATFORM == CC_PLATFORM_IOS
    
    //TODO: iOS
    C2DXiOSShareSDK::showShareMenu(platTypes, content, callback);
    
#endif
}

void C2DXShareSDK::showShareMenu(__Array *platTypes, __Dictionary *content, Point pt, C2DXMenuArrowDirection direction, C2DXShareResultEvent callback)
{
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
    //TODO: Android
    showShareMenu(0, content, callback);
    
#elif CC_TARGET_PLATFORM == CC_PLATFORM_IOS
    
    //TODO: iOS
    C2DXiOSShareSDK::showShareMenu(platTypes, content, pt, direction, callback);
    
#endif
}

void C2DXShareSDK::showShareView(C2DXPlatType platType, __Dictionary *content, C2DXShareResultEvent callback)
{
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
	//The theme parameters mainly set the style of the interface,You can choose two "skyblue" or "classic" style
	const char* theme = "classic";
    //TODO: Android
    onekeyShare((int) platType, content, theme, callback);
    
#elif CC_TARGET_PLATFORM == CC_PLATFORM_IOS
    
    //TODO: iOS
    C2DXiOSShareSDK::showShareView(platType, content, callback);
    
#endif
}

void C2DXShareSDK::getFriendList(C2DXPlatType platType, int count, int page, const char *account, C2DXGetUserInfoResultEvent callback){
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID

    //TODO: Android
	doListFriend((int) platType, count, page, account, callback);

#elif CC_TARGET_PLATFORM == CC_PLATFORM_IOS

    //TODO: iOS
    //

#endif
}

void C2DXShareSDK::followFriend(C2DXPlatType platType, const char* account, C2DXFollowResultEvent callback){
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID

    //TODO: Android
	doFollowFriend((int) platType, account, callback);

#elif CC_TARGET_PLATFORM == CC_PLATFORM_IOS

    //TODO: iOS
    //

#endif
}

void C2DXShareSDK::toast(const char *msg)
{
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID

    //TODO: Android
    toastShow(msg);

#elif CC_TARGET_PLATFORM == CC_PLATFORM_IOS

    //TODO: iOS

#endif
}
