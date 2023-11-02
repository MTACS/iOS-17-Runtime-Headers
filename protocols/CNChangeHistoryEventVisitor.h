
@protocol CNChangeHistoryEventVisitor <NSObject>

@required

- (void)visitAddContactEvent:(CNChangeHistoryAddContactEvent *)arg1;
- (void)visitDeleteContactEvent:(CNChangeHistoryDeleteContactEvent *)arg1;
- (void)visitDropEverythingEvent:(CNChangeHistoryDropEverythingEvent *)arg1;
- (void)visitUpdateContactEvent:(CNChangeHistoryUpdateContactEvent *)arg1;

@optional

- (void)visitAddGroupEvent:(CNChangeHistoryAddGroupEvent *)arg1;
- (void)visitAddMemberToGroupEvent:(CNChangeHistoryAddMemberToGroupEvent *)arg1;
- (void)visitAddSubgroupToGroupEvent:(CNChangeHistoryAddSubgroupToGroupEvent *)arg1;
- (void)visitDeleteGroupEvent:(CNChangeHistoryDeleteGroupEvent *)arg1;
- (void)visitRemoveMemberFromGroupEvent:(CNChangeHistoryRemoveMemberFromGroupEvent *)arg1;
- (void)visitRemoveSubgroupFromGroupEvent:(CNChangeHistoryRemoveSubgroupFromGroupEvent *)arg1;
- (void)visitUpdateGroupEvent:(CNChangeHistoryUpdateGroupEvent *)arg1;

@end
