
@protocol SBFBarSwipeBehaviorDelegate <NSObject>

@required

- (void)barSwipeBehaviorActionPerformed:(SBFBarSwipeBehavior *)arg1;

@optional

- (void)barSwipeBehavior:(SBFBarSwipeBehavior *)arg1 didUpdateAdditionalEdgeSpacing:(double)arg2;
- (UIView *)barSwipeBehaviorGrabberViewContainer:(SBFBarSwipeBehavior *)arg1;

@end
