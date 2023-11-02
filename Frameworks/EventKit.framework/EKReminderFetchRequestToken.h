
@interface EKReminderFetchRequestToken : NSObject <EKFetchRequestToken, NSCopying> {
    EKReminderStore * _reminderStore;
}

@property (nonatomic, readonly) EKReminderStore *reminderStore;

- (void).cxx_destruct;
- (void)cancel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithReminderStore:(id)arg1;
- (id)reminderStore;

@end
