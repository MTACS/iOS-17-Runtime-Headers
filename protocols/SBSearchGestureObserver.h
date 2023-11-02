
@protocol SBSearchGestureObserver <NSObject>

@required

- (void)searchGesture:(SBSearchGesture *)arg1 changedPercentComplete:(double)arg2;

@optional

- (void)searchGesture:(SBSearchGesture *)arg1 completedShowing:(bool)arg2;
- (void)searchGesture:(SBSearchGesture *)arg1 endedGesture:(bool)arg2;
- (void)searchGesture:(SBSearchGesture *)arg1 resetAnimated:(bool)arg2;
- (void)searchGesture:(SBSearchGesture *)arg1 startedShowing:(bool)arg2;

@end
