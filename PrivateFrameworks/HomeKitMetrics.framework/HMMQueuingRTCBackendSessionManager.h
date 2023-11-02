
@interface HMMQueuingRTCBackendSessionManager : NSObject <HMMRTCBackendSessionManager, _HMMLogBackendSubmitterDelegate> {
    bool  __isTimeValid;
    NSPointerArray * _activeSessions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    double  _nextStaleCheckTime;
    NSOperationQueue * _queue;
    <HMMRTCReportingFactory> * _rtcFactory;
    id /* block */  _timeSourceBlock;
}

@property (nonatomic, readonly) NSOperationQueue *queue;
@property (nonatomic, readonly) <HMMRTCReportingFactory> *rtcFactory;
@property (nonatomic, readonly) id /* block */ timeSourceBlock;

+ (id)logCategory;
+ (id)sharedSessionManager;

- (void).cxx_destruct;
- (bool)_isTimeValid;
- (void)addBarrierBlock:(id /* block */)arg1;
- (void)checkForStaleSessions;
- (id)initWithRTCFactory:(id)arg1 timeSourceBlock:(id /* block */)arg2;
- (id)logBackendSessionWithServiceName:(id)arg1 sessionUUID:(id)arg2 isRealtime:(bool)arg3;
- (id)queue;
- (id)rtcFactory;
- (void)sendMetaEventWithName:(id)arg1 forServiceName:(id)arg2;
- (void)submitMessages:(id)arg1 serviceName:(id)arg2 sessionUUID:(id)arg3 isRealtime:(bool)arg4;
- (id /* block */)timeSourceBlock;

@end
