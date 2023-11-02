
@interface MKSystemController : NSObject {
    <MKSystemControllerOpenURLDelegate> * _openURLDelegate;
}

@property (nonatomic) <MKSystemControllerOpenURLDelegate> *openURLDelegate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_defaultOpenURLOptions;
- (bool)_isInSpotlight;
- (bool)_isRunningInLockScreen;
- (bool)_shouldUseLaunchServices;
- (bool)isDevicePluggedIn;
- (bool)isHiDPI;
- (bool)isInternalInstall;
- (bool)isPhone6PlusOrLarger;
- (bool)isWifiEnabled;
- (bool)openURL:(id)arg1;
- (void)openURL:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)openURL:(id)arg1 fromScene:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)openURLDelegate;
- (void)openUserActivity:(id)arg1 withApplicationRecord:(id)arg2 requireOptionKeyPromptUnlockDevice:(bool)arg3 completionHandler:(id /* block */)arg4;
- (bool)overrideBlurStyle;
- (void)placeDialRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)reduceMotionEnabled;
- (bool)requiresRTT;
- (double)screenScale;
- (struct CGSize { double x1; double x2; })screenSize;
- (void)setOpenURLDelegate:(id)arg1;
- (bool)shouldCaptureMapViewGestureAnalytics;
- (bool)supports3DImagery;
- (bool)supports3DMaps;
- (bool)supportsAlwaysOnCompass;
- (bool)supportsPitchAPI;
- (int)userInterfaceIdiom;

@end
