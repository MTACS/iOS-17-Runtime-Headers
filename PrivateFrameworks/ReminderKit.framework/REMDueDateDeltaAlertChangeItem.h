
@interface REMDueDateDeltaAlertChangeItem : NSObject {
    REMDueDateDeltaAlert * _dueDateDeltaAlert;
    REMReminderDueDateDeltaAlertContextChangeItem * _reminderDueDateDeltaAlertContextChangeItem;
}

@property (nonatomic, retain) REMDueDateDeltaAlert *dueDateDeltaAlert;
@property (nonatomic, retain) REMReminderDueDateDeltaAlertContextChangeItem *reminderDueDateDeltaAlertContextChangeItem;

- (void).cxx_destruct;
- (id)_setMinimumSupportedAppVersion:(long long)arg1;
- (id)dueDateDeltaAlert;
- (id)initWithReminderDueDateDeltaAlertContextChangeItem:(id)arg1 dueDateDeltaAlert:(id)arg2;
- (id)reminderDueDateDeltaAlertContextChangeItem;
- (id)setAcknowledgedDate:(id)arg1;
- (id)setDueDateDelta:(id)arg1;
- (void)setDueDateDeltaAlert:(id)arg1;
- (void)setReminderDueDateDeltaAlertContextChangeItem:(id)arg1;

@end
