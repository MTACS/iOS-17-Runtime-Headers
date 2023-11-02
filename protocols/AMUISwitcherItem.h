
@protocol AMUISwitcherItem <NSObject>

@required

- (<NSObject> *)identifier;
- (UIView *)itemView;

@optional

- (void)invalidate;
- (UIViewController *)itemViewController;
- (void)switcher:(AMUISwitcherViewController *)arg1 didMoveToWindow:(UIWindow *)arg2;
- (void)switcher:(AMUISwitcherViewController *)arg1 updateItemForPresentationProgress:(double)arg2;
- (void)switcher:(AMUISwitcherViewController *)arg1 willMoveToWindow:(UIWindow *)arg2;
- (void)switcherItemDidAppear:(AMUISwitcherViewController *)arg1;
- (void)switcherItemDidDisappear:(AMUISwitcherViewController *)arg1;
- (void)switcherItemWillAppear:(AMUISwitcherViewController *)arg1;
- (void)switcherItemWillDisappear:(AMUISwitcherViewController *)arg1;

@end
