
@interface HMDSharedHomeUpdateSession : NSObject <HMFDumpState, HMFLogging, HMFTimerDelegate> {
    double  _currentTimerValue;
    <HMDSharedHomeUpdateSessionDelegate> * _delegate;
    HMDHome * _home;
    HMFMessageDispatcher * _messageDispatcher;
    NSDictionary * _messagePayload;
    unsigned long long  _retryCount;
    NSUUID * _sessionID;
    HMFTimer * _timer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HMDSharedHomeUpdateSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *homeIdentifier;
@property (nonatomic, readonly) NSUUID *sessionID;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)dumpState;
- (id)homeIdentifier;
- (id)initWithHome:(id)arg1 delegate:(id)arg2 workQueue:(id)arg3 messagePayload:(id)arg4 messageDispatcher:(id)arg5;
- (id)logIdentifier;
- (void)requestDataSync;
- (id)sessionID;
- (void)timerDidFire:(id)arg1;

@end
