
@interface REMAlarmDueDateDeltaAlertTrigger : REMAlarmTrigger <NSSecureCoding> {
    NSDate * _acknowledgedDate;
    REMDueDateDeltaInterval * _dueDateDelta;
}

@property (nonatomic, readonly) NSDate *acknowledgedDate;
@property (nonatomic, readonly) REMDueDateDeltaInterval *dueDateDelta;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_deepCopy;
- (id)acknowledgedDate;
- (id)description;
- (id)dueDateDelta;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDueDateDelta:(id)arg1 acknowledgedDate:(id)arg2;
- (id)initWithObjectID:(id)arg1 dueDateDelta:(id)arg2 acknowledgedDate:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isTemporal;

@end
