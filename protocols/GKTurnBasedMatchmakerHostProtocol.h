
@protocol GKTurnBasedMatchmakerHostProtocol <GKExtensionHostProtocol>

@optional

- (void)finishWithError:(NSError *)arg1;
- (void)finishWithMatch:(GKTurnBasedMatchInternal *)arg1;
- (void)playerQuitMatch:(GKTurnBasedMatchInternal *)arg1;

@end
