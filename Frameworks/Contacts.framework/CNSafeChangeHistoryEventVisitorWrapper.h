
@interface CNSafeChangeHistoryEventVisitorWrapper : NSObject <CNChangeHistoryEventVisitorPrivate> {
    <CNChangeHistoryEventVisitor> * _visitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CNChangeHistoryEventVisitor> *visitor;

- (void).cxx_destruct;
- (id)description;
- (id)initWithChangeHistoryEventVisitor:(id)arg1;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitAddGroupEvent:(id)arg1;
- (void)visitAddMemberToGroupEvent:(id)arg1;
- (void)visitAddSubgroupToGroupEvent:(id)arg1;
- (void)visitDeleteContactEvent:(id)arg1;
- (void)visitDeleteGroupEvent:(id)arg1;
- (void)visitDifferentMeCardEvent:(id)arg1;
- (void)visitDropEverythingEvent:(id)arg1;
- (void)visitLinkContactsEvent:(id)arg1;
- (void)visitPreferredContactForImageEvent:(id)arg1;
- (void)visitPreferredContactForNameEvent:(id)arg1;
- (void)visitRemoveMemberFromGroupEvent:(id)arg1;
- (void)visitRemoveSubgroupFromGroupEvent:(id)arg1;
- (void)visitUnlinkContactEvent:(id)arg1;
- (void)visitUpdateContactEvent:(id)arg1;
- (void)visitUpdateGroupEvent:(id)arg1;
- (id)visitor;

@end
