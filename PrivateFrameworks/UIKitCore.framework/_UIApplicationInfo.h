
@interface _UIApplicationInfo : FBSApplicationInfo {
    long long  _backgroundStyle;
    bool  _canChangeBackgroundStyle;
    bool  _fakingRequiresHighResolution;
    unsigned long long  _ignoredOverrides;
    NSString * _keyColorAssetName;
    NSString * _launchImageFile;
    long long  _launchingInterfaceOrientation;
    NSString * _lazy_fallbackFolderName;
    NSArray * _lazy_folderNames;
    bool  _optOutOfRTL;
    _UIApplicationInfoParser * _plistParser;
    long long  _requestedStatusBarStyle;
    bool  _requiresHighResolution;
    bool  _statusBarHidden;
    bool  _statusBarHiddenWhenVerticallyCompact;
    long long  _supportedUserInterfaceStyle;
    bool  _systemWindowsSecure;
    unsigned long long  _viewControllerBasedStatusBarAppearance;
    long long  _whitePointAdaptivityStyle;
}

@property (nonatomic, readonly) long long backgroundStyle;
@property (nonatomic, readonly) bool canChangeBackgroundStyle;
@property (nonatomic, readonly) bool fakingRequiresHighResolution;
@property (nonatomic, readonly) NSString *fallbackFolderName;
@property (nonatomic, readonly) NSArray *folderNames;
@property (nonatomic, readonly) unsigned long long ignoredOverrides;
@property (nonatomic, readonly, copy) NSString *keyColorAssetName;
@property (nonatomic, readonly, copy) NSString *launchImageFile;
@property (nonatomic, readonly) bool optOutOfRTL;
@property (nonatomic, readonly) long long requestedStatusBarStyle;
@property (nonatomic, readonly) bool requiresHighResolution;
@property (nonatomic, readonly) bool statusBarHidden;
@property (nonatomic, readonly) bool statusBarHiddenWhenVerticallyCompact;
@property (nonatomic, readonly) long long supportedUserInterfaceStyle;
@property (nonatomic, readonly) bool systemWindowsSecure;
@property (nonatomic, readonly) unsigned long long viewControllerBasedStatusBarAppearance;
@property (nonatomic, readonly) long long whitePointAdaptivityStyle;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_genreNameForID:(long long)arg1;
+ (id)_localizedFolderNameForName:(id)arg1;

- (void).cxx_destruct;
- (long long)_launchingInterfaceOrientation;
- (void)_loadFromProxy:(id)arg1;
- (void)_lock_loadFolderNamesIfNecessary;
- (long long)backgroundStyle;
- (bool)canChangeBackgroundStyle;
- (bool)fakingRequiresHighResolution;
- (id)fallbackFolderName;
- (id)folderNames;
- (unsigned long long)ignoredOverrides;
- (id)keyColorAssetName;
- (id)launchImageFile;
- (bool)optOutOfRTL;
- (long long)requestedStatusBarStyle;
- (bool)requiresHighResolution;
- (bool)statusBarForcedHiddenForInterfaceOrientation:(long long)arg1 onDisplay:(id)arg2;
- (bool)statusBarForcedHiddenForInterfaceOrientation:(long long)arg1 onDisplay:(id)arg2 withUserInterfaceIdiom:(long long)arg3;
- (bool)statusBarHidden;
- (bool)statusBarHiddenForInterfaceOrientation:(long long)arg1 onDisplay:(id)arg2;
- (bool)statusBarHiddenForInterfaceOrientation:(long long)arg1 onDisplay:(id)arg2 withUserInterfaceIdiom:(long long)arg3;
- (bool)statusBarHiddenWhenVerticallyCompact;
- (long long)supportedUserInterfaceStyle;
- (bool)systemWindowsSecure;
- (unsigned long long)viewControllerBasedStatusBarAppearance;
- (long long)whitePointAdaptivityStyle;

// Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard

- (bool)xb_supportsUserInterfaceStyle:(long long)arg1;
- (long long)xb_userInterfaceStyleForRequestedUserInterfaceStyle:(long long)arg1;

@end
