
@interface HMDUserPresenceFeedRetryTimer : HMFObject <HMFLogging> {
    unsigned long long  _retryCount;
    HMFTimer * _retryTimer;
    NSUUID * _timerID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property unsigned long long retryCount;
@property (readonly) double retryTimeInterval;
@property (retain) HMFTimer *retryTimer;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *timerID;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (void)cancel;
- (id)init;
- (id)logIdentifier;
- (unsigned long long)retryCount;
- (double)retryTimeInterval;
- (id)retryTimer;
- (void)setRetryCount:(unsigned long long)arg1;
- (void)setRetryTimer:(id)arg1;
- (bool)shouldRetryImmediately:(double)arg1;
- (void)startWithDelegate:(id)arg1 delegateQueue:(id)arg2 responseTime:(double)arg3;
- (id)timerID;

@end
