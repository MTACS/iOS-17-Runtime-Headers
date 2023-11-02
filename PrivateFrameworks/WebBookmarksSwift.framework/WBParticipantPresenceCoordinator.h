
@interface WBParticipantPresenceCoordinator : NSObject <_WBParticipantPresenceCoordinatorDelegate> {
    <WBParticipantPresenceCoordinatorDelegate> * _delegate;
    _WBParticipantPresenceCoordinator * _internalCoordinator;
}

@property (nonatomic) <WBParticipantPresenceCoordinatorDelegate> *delegate;

- (void).cxx_destruct;
- (void)beginCollaborationForShare:(id)arg1;
- (void)beginDeviceCoordination;
- (id)delegate;
- (void)endCollaborationForShare:(id)arg1;
- (void)endDeviceCoordination;
- (void)getActiveParticipantsInTabGroupWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getActiveParticipantsInTabWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getCurrentConnectionStateWithCompletionHandler:(id /* block */)arg1;
- (void)getCurrentLocationIdentifiersForParticipantIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getTabGroupIdentifierForParticipantIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getTabIdentifierForParticipantIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)moveCurrentParticipantToTabIdentifier:(id)arg1 inTabGroupIdentifier:(id)arg2 withDeviceIdentifier:(id)arg3;
- (void)participantPresenceCoordinator:(id)arg1 didUpdateActiveParticipants:(id)arg2 inTabGroupWithIdentifier:(id)arg3;
- (void)participantPresenceCoordinator:(id)arg1 didUpdateActiveParticipants:(id)arg2 inTabWithIdentifier:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)shareDidUpdate:(id)arg1;

@end
