
@interface REMReminderFlaggedContextChangeItem : NSObject {
    REMReminderChangeItem * _reminderChangeItem;
}

@property (nonatomic) long long flagged;
@property (nonatomic, retain) REMReminderChangeItem *reminderChangeItem;

- (void).cxx_destruct;
- (long long)flagged;
- (id)initWithReminderChangeItem:(id)arg1;
- (id)reminderChangeItem;
- (void)setFlagged:(long long)arg1;
- (void)setReminderChangeItem:(id)arg1;

@end
