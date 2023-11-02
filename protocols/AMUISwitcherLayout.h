
@protocol AMUISwitcherLayout <NSObject>

@required

- (bool)isCircular;
- (double)spacing;
- (void)switcher:(AMUISwitcherViewController *)arg1 updateItem:(id <AMUISwitcherItem>)arg2 view:(UIView *)arg3 forPresentationProgress:(double)arg4;
- (long long)switcherAxis;

@end
