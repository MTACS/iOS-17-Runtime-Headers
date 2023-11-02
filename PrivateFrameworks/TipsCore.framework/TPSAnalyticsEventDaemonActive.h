
@interface TPSAnalyticsEventDaemonActive : TPSAnalyticsEvent {
    bool  _alreadyRunning;
    NSString * _reason;
}

@property (nonatomic, retain) NSString *reason;

+ (id)eventWithReason:(id)arg1 alreadyRunning:(bool)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithReason:(id)arg1 alreadyRunning:(bool)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)mutableAnalyticsEventRepresentation;
- (id)reason;
- (void)setReason:(id)arg1;

@end
