
@interface HMDWatchSyncRetryContext : HMFObject <NSCopying> {
    double  _initialRetryInterval;
    long long  _maximumRetryAttempts;
    long long  _retryAttempt;
    NSString * _watchIdentifier;
    HMDWatchSync * _watchSync;
}

@property (readonly) double initialRetryInterval;
@property (readonly) long long maximumRetryAttempts;
@property (readonly) long long retryAttempt;
@property (readonly) double retryInterval;
@property (readonly, copy) NSString *watchIdentifier;
@property (readonly, copy) HMDWatchSync *watchSync;

+ (id)createWithWatchIdentifier:(id)arg1 watchSync:(id)arg2 retryAttempt:(long long)arg3;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithWatchIdentifier:(id)arg1 watchSync:(id)arg2 retryAttempt:(long long)arg3 initialRetryInterval:(double)arg4 maximumRetryAttempts:(long long)arg5;
- (double)initialRetryInterval;
- (long long)maximumRetryAttempts;
- (long long)retryAttempt;
- (double)retryInterval;
- (id)watchIdentifier;
- (id)watchSync;

@end
