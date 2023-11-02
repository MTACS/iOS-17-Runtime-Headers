
@interface MSClientSidePauseContext : NSObject {
    NSString * _UUID;
    MSTimerGate * _gate;
    NSXPCConnection * _server;
    NSObject<OS_dispatch_queue> * _timerQueue;
}

@property (nonatomic, retain) MSTimerGate *gate;
@property (nonatomic, retain) NSXPCConnection *server;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *timerQueue;

- (void).cxx_destruct;
- (id)gate;
- (id)initWithServer:(id)arg1;
- (void)resume;
- (id)server;
- (void)setGate:(id)arg1;
- (void)setServer:(id)arg1;
- (void)setTimerQueue:(id)arg1;
- (id)timerQueue;
- (void)timerQueuePing;
- (void)timerQueueTimerFired;

@end
