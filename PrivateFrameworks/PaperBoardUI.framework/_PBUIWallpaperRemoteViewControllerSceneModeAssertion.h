
@interface _PBUIWallpaperRemoteViewControllerSceneModeAssertion : BSSimpleAssertion {
    long long  _sceneMode;
}

@property (nonatomic, readonly) long long sceneMode;

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithIdentifier:(id)arg1 forReason:(id)arg2 sceneMode:(long long)arg3 invalidationBlock:(id /* block */)arg4;
- (long long)sceneMode;

@end
