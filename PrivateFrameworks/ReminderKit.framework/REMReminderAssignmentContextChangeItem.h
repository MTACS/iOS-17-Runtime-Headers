
@interface REMReminderAssignmentContextChangeItem : NSObject {
    NSMutableSet * _mutableAssignments;
    REMReminderChangeItem * _reminderChangeItem;
}

@property (nonatomic, readonly) NSSet *assignments;
@property (nonatomic, readonly) REMAssignment *currentAssignment;
@property (nonatomic, retain) NSMutableSet *mutableAssignments;
@property (nonatomic, retain) REMReminderChangeItem *reminderChangeItem;

- (void).cxx_destruct;
- (void)addAssignment:(id)arg1;
- (id)addAssignmentWithAssignee:(id)arg1 originator:(id)arg2 status:(long long)arg3;
- (id)addAssignmentWithAssigneeID:(id)arg1 originatorID:(id)arg2 status:(long long)arg3;
- (id)assignments;
- (id)currentAssignment;
- (id)initWithReminderChangeItem:(id)arg1;
- (id)mutableAssignments;
- (id)reminderChangeItem;
- (void)removeAllAssignments;
- (void)removeAssignment:(id)arg1;
- (void)setMutableAssignments:(id)arg1;
- (void)setReminderChangeItem:(id)arg1;

@end
