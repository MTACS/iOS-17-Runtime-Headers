
@interface HDSPConfirmWakeUpIDSMessage : HDSPEventRecordMessage {
    NSDate * _wakeUpConfirmedUntilDate;
}

@property (nonatomic, readonly) NSDate *wakeUpConfirmedDate;
@property (nonatomic, readonly) NSDate *wakeUpConfirmedUntilDate;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWakeUpConfirmedDate:(id)arg1 wakeUpConfirmedUntilDate:(id)arg2;
- (id)succinctDescriptionBuilder;
- (id)wakeUpConfirmedDate;
- (id)wakeUpConfirmedUntilDate;

@end
