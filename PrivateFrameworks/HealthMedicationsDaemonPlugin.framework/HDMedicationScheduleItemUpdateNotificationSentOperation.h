
@interface HDMedicationScheduleItemUpdateNotificationSentOperation : HDJournalableOperation {
    NSString * _itemIdentifier;
    bool  _notificationSent;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithScheduleItemIdentifier:(id)arg1 notificationSent:(bool)arg2;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;

@end
