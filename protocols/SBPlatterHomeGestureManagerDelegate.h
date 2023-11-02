
@protocol SBPlatterHomeGestureManagerDelegate <NSObject>

@required

- (UIWindow *)platterHomeGestureManager:(SBPlatterHomeGestureManager *)arg1 windowForParticipant:(id <SBUIPresentableHomeGestureParticipant>)arg2;
- (long long)platterHomeGestureManager:(SBPlatterHomeGestureManager *)arg1 zStackParticipantIdentifierForParticipant:(id <SBUIPresentableHomeGestureParticipant>)arg2;

@optional

- (<BSInvalidatable> *)platterHomeGestureManager:(SBPlatterHomeGestureManager *)arg1 gestureRecognizerPriorityAssertionForParticipant:(id <SBUIPresentableHomeGestureParticipant>)arg2 reason:(NSString *)arg3;
- (NSArray *)platterHomeGestureManager:(SBPlatterHomeGestureManager *)arg1 orderedParticipants:(NSSet *)arg2;
- (void)platterHomeGestureManager:(SBPlatterHomeGestureManager *)arg1 participantOwningHomeGestureDidChange:(id <SBUIPresentableHomeGestureParticipant>)arg2;

@end
