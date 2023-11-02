
@interface WRM_UCMInterface : NSObject {
    id /* block */  mBtConnectedLinksObserver;
    NSObject<OS_xpc_object> * mConnection;
    bool  mIsAwdlEnabled;
    bool  mIsNanEnabled;
    id /* block */  mNotificationBlock;
    int  mProcessId;
    NSObject<OS_dispatch_queue> * mQueue;
}

- (void)dealloc;
- (void)handleNotification:(id)arg1 :(bool)arg2;
- (id)init;
- (void)processBTConnectedLinksNotification:(id)arg1;
- (void)reConnect;
- (void)registerClient:(int)arg1 queue:(id)arg2;
- (void)setAWDLEnabled:(bool)arg1;
- (void)setCriticalAirPlayEnabled:(bool)arg1 estimatedDuration:(unsigned int)arg2 criticalityPercentage:(unsigned short)arg3;
- (void)setNANEnabled:(bool)arg1;
- (void)subscribeBtConnectedLinksNotification:(id /* block */)arg1;
- (void)unregisterClient;

@end
