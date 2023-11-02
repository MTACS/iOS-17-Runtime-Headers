
@interface UIOpenURLAction : UISOpenURLAction {
    UISceneOpenURLOptions * _localOpenURLOptions;
}

@property (nonatomic, readonly) UISceneOpenURLOptions *localOpenURLOptions;

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 openURLOptions:(id)arg2 workspaceOriginatingProcess:(id)arg3 responder:(id)arg4;
- (id)localOpenURLOptions;

@end
