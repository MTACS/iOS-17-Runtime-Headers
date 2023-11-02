
@interface SBUISystemApertureSceneResizeAction : BSAction {
    SBUISystemApertureAnimationParameters * _animationParameters;
    bool  _transientLocal;
    bool  _userInitiated;
}

@property (nonatomic, readonly) SBUISystemApertureAnimationParameters *animationParameters;
@property (getter=isTransientLocal, nonatomic, readonly) bool transientLocal;
@property (getter=isUserInitiated, nonatomic, readonly) bool userInitiated;

+ (id)sceneResizeActionWithAnimationParameters:(id)arg1;
+ (id)transientLocalResizeSceneActionWithAnimationParameters:(id)arg1;
+ (id)userInitiatedSceneResizeActionWithAnimationParameters:(id)arg1;

- (void).cxx_destruct;
- (id)animationParameters;
- (id)initWithAnimationParameters:(id)arg1;
- (bool)isTransientLocal;
- (bool)isUserInitiated;

@end
