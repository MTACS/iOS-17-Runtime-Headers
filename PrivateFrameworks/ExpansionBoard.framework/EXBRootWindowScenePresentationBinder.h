
@interface EXBRootWindowScenePresentationBinder : UIRootWindowScenePresentationBinder {
    FBSDisplayConfiguration * _displayConfiguration;
    UIRootSceneWindow * _rootWindow;
}

@property (nonatomic, readonly) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic, readonly) UIRootSceneWindow *rootWindow;

- (void).cxx_destruct;
- (id)displayConfiguration;
- (id)initWithIdentifier:(id)arg1 priority:(long long)arg2 appearanceStyle:(unsigned long long)arg3 rootWindow:(id)arg4;
- (id)rootWindow;

@end
