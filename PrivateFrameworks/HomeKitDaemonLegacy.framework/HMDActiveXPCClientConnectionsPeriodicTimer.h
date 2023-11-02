
@interface HMDActiveXPCClientConnectionsPeriodicTimer : HMFObject <HMFLogging, HMFTimerDelegate> {
    <HMDActiveXPCClientConnectionsPeriodicTimerDelegate> * _delegate;
    NSString * _logIdentifier;
    NSHashTable * _mutableClientConnections;
    double  _timeInterval;
    HMFTimer * _timer;
    id /* block */  _timerFactory;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSSet *clientConnections;
@property (readonly, copy) NSString *debugDescription;
@property <HMDActiveXPCClientConnectionsPeriodicTimerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) NSHashTable *mutableClientConnections;
@property (readonly) Class superclass;
@property (readonly) double timeInterval;
@property (retain) HMFTimer *timer;
@property (copy) id /* block */ timerFactory;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_updateTimer;
- (void)addClientConnection:(id)arg1;
- (id)clientConnections;
- (id)delegate;
- (void)handleClientConnectionDidActivate:(id)arg1;
- (void)handleClientConnectionDidDeactivate:(id)arg1;
- (id)initWithTimeInterval:(double)arg1 logIdentifier:(id)arg2 workQueue:(id)arg3;
- (id)logIdentifier;
- (id)mutableClientConnections;
- (void)removeClientConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)setTimerFactory:(id /* block */)arg1;
- (double)timeInterval;
- (id)timer;
- (void)timerDidFire:(id)arg1;
- (id /* block */)timerFactory;
- (id)workQueue;

@end
