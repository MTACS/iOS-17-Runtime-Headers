
@protocol SBPIPStashableWrapperViewControllerDelegate <NSObject>

@optional

- (bool)stashableWrapper:(SBPIPStashableWrapperViewController *)arg1 didReceivedTapGesture:(UIGestureRecognizer *)arg2;
- (void)stashableWrapper:(SBPIPStashableWrapperViewController *)arg1 didTransitionToStashed:(bool)arg2;

@end
