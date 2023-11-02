
@interface PXApplicationState : PXObservable {
    UIApplication * _application;
    NSMutableSet * _disabledIdleTimerTokens;
    bool  _isHidden;
}

@property (nonatomic, readonly) UIApplication *application;
@property (nonatomic, readonly) bool isHidden;
@property (nonatomic, readonly) bool isLaunchedForTesting;

+ (bool)isRunningInPhotosApp;
+ (bool)isRunningInPhotosTopShelfExtension;
+ (id)sharedState;

- (void).cxx_destruct;
- (void)_appDidHide:(id)arg1;
- (void)_appDidUnhide:(id)arg1;
- (void)_sceneDidActivate:(id)arg1;
- (void)_sceneWillDeactivate:(id)arg1;
- (id)application;
- (id)beginDisablingIdleTimerForReason:(id)arg1;
- (void)endDisablingIdleTimer:(id)arg1;
- (id)init;
- (id)initWithApplication:(id)arg1;
- (id)initWithApplication:(id)arg1 isExtension:(bool)arg2;
- (bool)isDisablingIdleTimerForReasons:(id*)arg1;
- (bool)isHidden;
- (bool)isLaunchedForTesting;
- (void)setIsHidden:(bool)arg1;

@end
