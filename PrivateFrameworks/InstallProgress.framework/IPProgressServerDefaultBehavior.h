
@interface IPProgressServerDefaultBehavior : NSObject <IPProgressServerBehavior, IPServerXPCTransportDelegate, IPXPCClientDelegate> {
    <IPProgressServerBehaviorDelegate> * _delegate;
    <IPStateUpdateStreamSink> * _stateSink;
    IPServerXPCTransport * _transport;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IPProgressServerBehaviorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activeInstallationsForClient:(id)arg1;
- (id)allInstallableStatesForClient:(id)arg1;
- (id)delegate;
- (void)identityWasUninstalled:(id)arg1;
- (id)initWithTransport:(id)arg1 stateUpdateSink:(id)arg2;
- (void)progressForIdentity:(id)arg1 changed:(id)arg2;
- (void)progressForIdentity:(id)arg1 finishedWithState:(unsigned long long)arg2;
- (id)progressForIdentity:(id)arg1 forClient:(id)arg2 error:(id*)arg3;
- (void)progressForIdentityInitiated:(id)arg1;
- (id)queue;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)transport:(id)arg1 acceptedClient:(id)arg2;
- (void)transport:(id)arg1 clientDisconnected:(id)arg2;
- (id)transport:(id)arg1 requestDelegateForClient:(id)arg2;
- (bool)transport:(id)arg1 shouldAcceptConnection:(id)arg2;

@end
