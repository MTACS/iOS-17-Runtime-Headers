
@interface _COTimerManagerConnectionProvider : NSObject <COTimerManagerConnectionProvider> {
    NSXPCConnection * _timerManagerServiceConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSXPCConnection *timerManagerServiceConnection;

- (void).cxx_destruct;
- (id)timerManagerServiceConnection;

@end
