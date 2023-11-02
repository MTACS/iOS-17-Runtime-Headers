
@interface ATXAppLaunchDuetEvent : ATXDuetEvent <NSSecureCoding> {
    long long  _appLaunchState;
    NSString * _bundleId;
    NSString * _launchReason;
}

@property (nonatomic, readonly) long long appLaunchState;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSString *launchReason;

+ (bool)_acceptableLaunchReason:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)appLaunchState;
- (id)bundleId;
- (bool)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithBundleId:(id)arg1 appLaunchState:(long long)arg2 launchReason:(id)arg3 startDate:(id)arg4 endDate:(id)arg5;
- (id)initWithBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentContextStoreValues;
- (id)initWithDKEvent:(id)arg1;
- (id)launchReason;

@end
