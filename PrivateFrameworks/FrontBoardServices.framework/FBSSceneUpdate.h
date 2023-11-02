
@interface FBSSceneUpdate : NSObject {
    FBSSceneTransitionContext * _context;
    FBSSettingsDiff * _diff;
    FBSSettings * _previousSettings;
    FBSSettings * _settings;
}

- (void).cxx_destruct;
- (void)inspect:(id /* block */)arg1;
- (id)previousSettings;
- (id)settings;
- (id)settingsDiff;
- (id)transitionContext;

@end
