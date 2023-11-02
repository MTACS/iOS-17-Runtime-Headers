
@interface SPUISearchBarController : SPUISpotlightRemoteViewController {
    <SPUISearchBarDelegate> * _delegate;
    NSLayoutConstraint * _heightAnchor;
    bool  _roundedCornerVisible;
}

@property (nonatomic) <SPUISearchBarDelegate> *delegate;
@property (retain) NSLayoutConstraint *heightAnchor;
@property (nonatomic) bool roundedCornerVisible;
@property (retain) _UINavigationBarTitleView *view;

+ (id)notificationCenterSearchBar;
+ (id)todayViewSearchBar;

- (void).cxx_destruct;
- (id)backgroundBlurView;
- (id)delegate;
- (void)didInvalidateSceneWhenForeground;
- (id)heightAnchor;
- (struct CGSize { double x1; double x2; })initialFittingSize;
- (void)loadView;
- (bool)roundedCornerVisible;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (id)sceneSpecification;
- (void)setBlurProgress:(double)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setHeightAnchor:(id)arg1;
- (void)setRoundedCornerVisible:(bool)arg1;
- (bool)setSceneFrameOnRotation;
- (void)updateSceneSettingsWithBlock:(id /* block */)arg1;

@end
