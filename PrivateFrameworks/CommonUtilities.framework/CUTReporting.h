
@interface CUTReporting : NSObject {
    CUTPromise * _promise;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _promiseLock;
}

@property (nonatomic, retain) CUTPromise *promise;
@property (readonly) struct os_unfair_lock_s { unsigned int x1; } promiseLock;

+ (id)RTCSessionPromiseWithBatchingInterval:(double)arg1;
+ (id)_rtcReportingSession;
+ (id)reportingSession;
+ (void)startRTCReportingSessionWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)_RTCSessionPromiseWithBatchingInterval:(double)arg1;
- (void)_beginPromiseTimeoutWithInterval:(long long)arg1;
- (void)_failSeal:(id)arg1 withError:(id)arg2;
- (void)_fullfillSeal:(id)arg1 withSession:(id)arg2;
- (void)_startConfigurationOfSession:(id)arg1 withPromiseSeal:(id)arg2;
- (id)init;
- (id)promise;
- (struct os_unfair_lock_s { unsigned int x1; })promiseLock;
- (void)setPromise:(id)arg1;

@end
