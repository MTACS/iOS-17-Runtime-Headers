
@protocol BCSMegashardFetchMetricProtocol <NSObject>

@required

- (long long)errorCode;
- (long long)hoursSinceLastSuccessfulFetch;
- (unsigned long long)reason;
- (void)setErrorCode:(long long)arg1;
- (void)setHoursSinceLastSuccessfulFetch:(long long)arg1;
- (void)setReason:(unsigned long long)arg1;
- (long long)type;

@end
