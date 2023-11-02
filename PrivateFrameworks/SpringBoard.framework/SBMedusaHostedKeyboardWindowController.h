
@interface SBMedusaHostedKeyboardWindowController : NSObject <BSInvalidatable, FBSceneObserver> {
    bool  _isUsingMedusaHostedKeyboardWindow;
    FBSSceneClientSettingsDiffInspector * _keyboardLayersClientSettingsDiffInspector;
    UIWindow * _medusaHostedKeyboardWindow;
    NSHashTable * _observers;
    SBWindowScene * _windowScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isUsingMedusaHostedKeyboardWindow, nonatomic, readonly) bool isUsingMedusaHostedKeyboardWindow;
@property (nonatomic, readonly) UIWindow *medusaHostedKeyboardWindow;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doObserverCalloutWithBlock:(id /* block */)arg1;
- (id)_keyboardLayersClientSettingsDiffInspector;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithWindowScene:(id)arg1;
- (void)invalidate;
- (bool)isKeyboardVisibleForSpringBoard;
- (bool)isUsingMedusaHostedKeyboardWindow;
- (id)medusaHostedKeyboardWindow;
- (id)newMedusaHostedKeyboardWindowLevelAssertionWithPriority:(unsigned long long)arg1 windowLevel:(double)arg2;
- (void)removeObserver:(id)arg1;
- (void)scene:(id)arg1 didCompleteUpdateWithContext:(id)arg2 error:(id)arg3;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (bool)shouldKeyboardBeWindowSizedForHostWithIdentity:(id)arg1;
- (void)updateMedusaHostedKeyboardWindow;
- (void)updateMedusaHostedKeyboardWindowForScene:(id)arg1 isForeground:(bool*)arg2;

@end
