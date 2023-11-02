
@interface MGRemoteQueryClientWatchdog : NSObject <MGRemoteQueryClientDelegate> {
    <MGRemoteQueryClientWatchdogDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    MGRemoteQueryClient * _ping;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pingLock;
    NSURLSession * _session;
    MGRemoteQueryClientTarget * _target;
    NSObject<OS_dispatch_source> * _timer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <MGRemoteQueryClientWatchdogDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MGRemoteQueryClient *ping;
@property (nonatomic, readonly) NSURLSession *session;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MGRemoteQueryClientTarget *target;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *timer;

+ (id)watchdogForTarget:(id)arg1 dispatchQueue:(id)arg2 delegate:(id)arg3 usingSession:(id)arg4;

- (void).cxx_destruct;
- (id)_initWithTarget:(id)arg1 dispatchQueue:(id)arg2 delegate:(id)arg3 usingSession:(id)arg4;
- (void)_pingFinished:(bool)arg1;
- (void)_pingStart;
- (void)_timerCancel;
- (void)_timerFired;
- (void)_timerInit;
- (void)_timerReschedule;
- (void)_withPingLock:(id /* block */)arg1;
- (void)clientInvalidated:(id)arg1 withError:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)dispatchQueue;
- (id)ping;
- (id)pingClient;
- (void)reset;
- (id)session;
- (void)setPing:(id)arg1;
- (id)target;
- (id)timer;

@end
