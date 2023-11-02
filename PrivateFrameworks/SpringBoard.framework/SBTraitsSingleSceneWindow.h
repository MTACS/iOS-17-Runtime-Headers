
@interface SBTraitsSingleSceneWindow : SBFWindow {
    bool  _sceneContentVisible;
}

@property (getter=isSceneContentVisible, nonatomic) bool sceneContentVisible;

+ (bool)_isSecure;

- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithWindowScene:(id)arg1;
- (bool)isContentHidden;
- (bool)isSceneContentVisible;
- (id)rootViewController;
- (void)setRootViewController:(id)arg1;
- (void)setSceneContentVisible:(bool)arg1;

@end
