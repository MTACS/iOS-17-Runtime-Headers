
@interface REMReminderSubtaskContextChangeItem : NSObject {
    REMReminderChangeItem * _reminderChangeItem;
}

@property (nonatomic, retain) REMReminderChangeItem *reminderChangeItem;

- (void).cxx_destruct;
- (id)_listChangeItem;
- (void)addReminderChangeItem:(id)arg1;
- (id)initWithReminderChangeItem:(id)arg1;
- (void)insertReminderChangeItem:(id)arg1 afterReminderChangeItem:(id)arg2;
- (void)insertReminderChangeItem:(id)arg1 beforeReminderChangeItem:(id)arg2;
- (id)reminderChangeItem;
- (void)setReminderChangeItem:(id)arg1;
- (void)undeleteSubtaskWithID:(id)arg1 usingUndo:(id)arg2;

@end
