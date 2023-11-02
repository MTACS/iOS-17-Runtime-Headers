
@interface SBPPTSearchGestureObserver : NSObject <SBSearchGestureObserver>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)searchGesture:(id)arg1 changedPercentComplete:(double)arg2;
- (void)searchGesture:(id)arg1 completedShowing:(bool)arg2;
- (void)searchGesture:(id)arg1 startedShowing:(bool)arg2;

@end
