
@interface ATXCarPlayDuetEvent : ATXDuetEvent <NSSecureCoding> {
    long long  _carPlayState;
}

@property (nonatomic, readonly) long long carPlayState;

+ (bool)supportsSecureCoding;

- (long long)carPlayState;
- (bool)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCarPlayConnectedState:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentContextStoreValues;
- (id)initWithDKEvent:(id)arg1;

@end
