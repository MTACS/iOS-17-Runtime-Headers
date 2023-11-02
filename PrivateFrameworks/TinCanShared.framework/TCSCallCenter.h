
@interface TCSCallCenter : NSObject <TCSClientXPC> {
    TCSCall * _call;
    NSXPCConnection * _connection;
    <TCSCallCenterDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TCSCallCenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_callPassingPredicate:(id /* block */)arg1;
- (id)activeCall;
- (void)applicationWillEnterForeground;
- (void)callConnected:(id)arg1;
- (void)callStatusChanged:(id)arg1;
- (id)currentCall;
- (id)delegate;
- (void)disconnectCall:(id)arg1;
- (id)endingCall;
- (bool)hasValidConnection;
- (id)init;
- (void)invalidate;
- (void)logEntryForCallWithUniqueProxyIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)queryIsTinCannable:(id)arg1;
- (void)remoteUplinkMuteChanged:(id)arg1;
- (id)ringingCall;
- (void)sessionViewControllerViewDidAppear;
- (void)setDelegate:(id)arg1;
- (void)setUplinkMuted:(bool)arg1 for:(id)arg2 completion:(id /* block */)arg3;
- (void)synchronouslyFetchCall;

@end
