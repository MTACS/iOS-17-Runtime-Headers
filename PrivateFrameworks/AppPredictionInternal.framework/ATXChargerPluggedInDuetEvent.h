
@interface ATXChargerPluggedInDuetEvent : ATXDuetEvent <NSSecureCoding> {
    NSNumber * _adapterType;
    long long  _chargerPluggedInState;
}

@property (nonatomic, readonly) NSNumber *adapterType;
@property (nonatomic, readonly) long long chargerPluggedInState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adapterType;
- (long long)chargerPluggedInState;
- (bool)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithChargerPluggedInState:(long long)arg1 adapterType:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentContextStoreValues;
- (id)initWithDKEvent:(id)arg1;

@end
