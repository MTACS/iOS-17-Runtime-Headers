
@interface SBWindowSceneStatusBarSettingsAssertion : NSObject <BSDescriptionProviding, SBWindowSceneStatusBarAssertion> {
    SBWindowSceneStatusBarAssertionManager * _assertionManager;
    unsigned long long  _level;
    NSString * _reason;
    SBStatusBarSettings * _settings;
    NSDate * _timestamp;
}

@property (nonatomic, readonly) SBWindowSceneStatusBarAssertionManager *assertionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long level;
@property (nonatomic, readonly, copy) NSString *reason;
@property (nonatomic, readonly, copy) SBStatusBarSettings *settings;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSDate *timestamp;

- (void).cxx_destruct;
- (id)_initWithWindowSceneStatusBarAssertionManager:(id)arg1 settings:(id)arg2 atLevel:(unsigned long long)arg3 reason:(id)arg4;
- (id)_initWithWindowSceneStatusBarAssertionManager:(id)arg1 statusBarHidden:(bool)arg2 atLevel:(unsigned long long)arg3 reason:(id)arg4;
- (void)acquire;
- (void)acquireWithAnimationParameters:(id)arg1;
- (id)assertionManager;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)invalidateWithAnimationParameters:(id)arg1;
- (unsigned long long)level;
- (void)modifySettingsWithBlock:(id /* block */)arg1;
- (void)modifySettingsWithBlock:(id /* block */)arg1 animationParameters:(id)arg2;
- (id)reason;
- (id)settings;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)timestamp;

@end
