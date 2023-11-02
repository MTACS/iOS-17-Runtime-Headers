
@interface HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper : HMFObject <HMFLogging> {
    HMFActivity * _activity;
    bool  _finished;
    CKOperationGroup * _operationGroup;
    NSDate * _operationStartTime;
    HMBProcessingOptions * _options;
    NAPromise * _promise;
    unsigned long long  _retryCount;
    double  _retryIntervalSeconds;
}

@property (nonatomic, readonly) HMFActivity *activity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool finished;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CKOperationGroup *operationGroup;
@property (nonatomic, retain) NSDate *operationStartTime;
@property (nonatomic, readonly) HMBProcessingOptions *options;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) double retryIntervalSeconds;
@property (nonatomic) bool shouldRetry;
@property (readonly) Class superclass;

+ (unsigned long long)__integerForPreferenceKey:(id)arg1 defaultValue:(unsigned long long)arg2;
+ (id)logCategory;
+ (unsigned long long)maxOperationDurationSeconds;
+ (unsigned long long)maxRetryCount;

- (void).cxx_destruct;
- (id)activity;
- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (void)finishWithResult:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (bool)finished;
- (id)initWithActivity:(id)arg1 options:(id)arg2 container:(id)arg3 useAnonymousRequests:(bool)arg4 promise:(id)arg5;
- (id)operationGroup;
- (id)operationStartTime;
- (id)options;
- (unsigned long long)retryCount;
- (double)retryIntervalSeconds;
- (void)setOperationStartTime:(id)arg1;
- (void)setRetryCount:(unsigned long long)arg1;
- (void)setRetryIntervalSeconds:(double)arg1;
- (void)setShouldRetry:(bool)arg1;
- (bool)shouldRetry;

@end
