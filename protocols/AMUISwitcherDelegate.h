
@protocol AMUISwitcherDelegate <NSObject>

@optional

- (void)switcher:(AMUISwitcherViewController *)arg1 didSettleOnItem:(id <AMUISwitcherItem>)arg2 interactive:(bool)arg3;
- (void)switcher:(AMUISwitcherViewController *)arg1 transitionDidBegin:(id <AMUISwitcherTransition>)arg2;
- (void)switcher:(AMUISwitcherViewController *)arg1 transitionDidEnd:(id <AMUISwitcherTransition>)arg2;
- (void)switcher:(AMUISwitcherViewController *)arg1 transitionDidUpdate:(id <AMUISwitcherTransition>)arg2 withProgress:(double)arg3;
- (void)switcher:(AMUISwitcherViewController *)arg1 transitioningFromItem:(id <AMUISwitcherItem>)arg2 toItem:(id <AMUISwitcherItem>)arg3 progress:(double)arg4;

@end
