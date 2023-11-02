
@interface CNSaveRequestVisitationTask : CNTask {
    CNChangeHistoryEventFactory * _factory;
    CNSaveRequest * _saveRequest;
    <CNChangeHistoryEventVisitorPrivate> * _visitor;
}

@property (readonly) CNChangeHistoryEventFactory *factory;
@property (readonly) CNSaveRequest *saveRequest;
@property (readonly) <CNChangeHistoryEventVisitorPrivate> *visitor;

- (void).cxx_destruct;
- (id)factory;
- (id)initWithSaveRequest:(id)arg1 visitor:(id)arg2 factory:(id)arg3;
- (id)run:(id*)arg1;
- (id)saveRequest;
- (void)sendAddMemberToGroupEvents;
- (void)sendAddSubgroupToGroupEvents;
- (void)sendAddedContactEvents;
- (void)sendAddedGroupEvents;
- (void)sendDeletedContactEvents;
- (void)sendDeletedGroupEvents;
- (void)sendDifferentMeCardEvent;
- (void)sendLinkContactsEvents;
- (void)sendPreferredContactForImageEvents;
- (void)sendPreferredContactForNameEvents;
- (void)sendRemoveMemberFromGroupEvents;
- (void)sendRemoveSubgroupFromGroupEvents;
- (void)sendUnlinkContactEvents;
- (void)sendUpdatedContactEvents;
- (void)sendUpdatedGroupEvents;
- (id)visitor;

@end
