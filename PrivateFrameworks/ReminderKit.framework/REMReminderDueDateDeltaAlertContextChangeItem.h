
@interface REMReminderDueDateDeltaAlertContextChangeItem : NSObject {
    REMReminderChangeItem * _reminderChangeItem;
}

@property (nonatomic, retain) REMReminderChangeItem *reminderChangeItem;

- (void).cxx_destruct;
- (void)_addOrUpdateDueDateDeltaAlert:(id)arg1;
- (id)addDueDateDeltaAlertWithDueDateDelta:(id)arg1;
- (id)addDueDateDeltaAlertWithDueDateDelta:(id)arg1 identifier:(id)arg2 creationDate:(id)arg3;
- (id)addDueDateDeltaAlertWithDueDateDeltaAlert:(id)arg1;
- (id)initWithReminderChangeItem:(id)arg1;
- (id)reminderChangeItem;
- (void)removeAllFetchedDueDateDeltaAlerts;
- (void)removeDueDateDeltaAlertsWithIdentifiers:(id)arg1;
- (void)setReminderChangeItem:(id)arg1;
- (id)updateDueDateDeltaAlert:(id)arg1;

@end
