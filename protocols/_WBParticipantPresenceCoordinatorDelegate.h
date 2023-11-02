
@protocol _WBParticipantPresenceCoordinatorDelegate

@required

- (void)participantPresenceCoordinator:(_WBParticipantPresenceCoordinator *)arg1 didUpdateActiveParticipants:(NSSet *)arg2 inTabGroupWithIdentifier:(NSString *)arg3;
- (void)participantPresenceCoordinator:(_WBParticipantPresenceCoordinator *)arg1 didUpdateActiveParticipants:(NSSet *)arg2 inTabWithIdentifier:(NSString *)arg3;

@end
