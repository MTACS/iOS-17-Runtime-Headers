
@protocol UIFocusEnvironment <NSObject>

@required

- (void)didUpdateFocusInContext:(UIFocusUpdateContext *)arg1 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg2;
- (<UIFocusItemContainer> *)focusItemContainer;
- (<UIFocusEnvironment> *)parentFocusEnvironment;
- (NSArray *)preferredFocusEnvironments;
- (void)setNeedsFocusUpdate;
- (bool)shouldUpdateFocusInContext:(UIFocusUpdateContext *)arg1;
- (void)updateFocusIfNeeded;

@optional

- (NSString *)focusGroupIdentifier;
- (UIView *)preferredFocusedView;
- (NSString *)soundIdentifierForFocusUpdateInContext:(UIFocusUpdateContext *)arg1;

@end
