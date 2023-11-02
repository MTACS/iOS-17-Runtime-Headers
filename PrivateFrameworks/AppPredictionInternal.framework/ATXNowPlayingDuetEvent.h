
@interface ATXNowPlayingDuetEvent : ATXDuetEvent <NSSecureCoding> {
    NSString * _bundleId;
    long long  _nowPlayingState;
    NSString * _track;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) long long nowPlayingState;
@property (nonatomic, readonly) NSString *track;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleId;
- (bool)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithBundleId:(id)arg1 track:(id)arg2 nowPlayingState:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentContextStoreValues;
- (id)initWithDKEvent:(id)arg1;
- (long long)nowPlayingState;
- (id)track;

@end
