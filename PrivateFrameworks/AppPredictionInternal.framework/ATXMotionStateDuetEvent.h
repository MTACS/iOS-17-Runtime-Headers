
@interface ATXMotionStateDuetEvent : ATXDuetEvent {
    long long  _motionState;
}

@property (nonatomic, readonly) long long motionState;

+ (bool)supportsSecureCoding;

- (bool)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentContextStoreValues;
- (id)initWithDKEvent:(id)arg1;
- (id)initWithMotionState:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (long long)motionState;

@end
