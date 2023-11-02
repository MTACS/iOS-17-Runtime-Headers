
@interface CBScalablePipeManager : CBManager {
    <CBScalablePipeManagerDelegate> * _delegate;
    struct { 
        unsigned int didRegisterEndpoint : 1; 
        unsigned int didUnregisterEndpoint : 1; 
        unsigned int pipeDidConnect : 1; 
        unsigned int pipeDidDisconnect : 1; 
    }  _delegateFlags;
    NSMutableSet * _identifiers;
    NSHashTable * _pipes;
}

@property (nonatomic) <CBScalablePipeManagerDelegate> *delegate;
@property (nonatomic, readonly, retain) NSSet *identifiers;
@property (nonatomic, readonly, retain) NSHashTable *pipes;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)getStatistics:(id /* block */)arg1;
- (void)handleEndpointAdded:(id)arg1;
- (void)handleEndpointRemoved:(id)arg1;
- (void)handleHostStateUpdated:(id)arg1;
- (void)handleMsg:(unsigned short)arg1 args:(id)arg2;
- (void)handlePipeConnected:(id)arg1;
- (void)handlePipeDisconnected:(id)arg1;
- (id)identifiers;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (bool)isMsgAllowedWhenOff:(unsigned short)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)orphanPipes;
- (id)pipeForName:(id)arg1 identifier:(id)arg2;
- (id)pipes;
- (void)registerEndpoint:(id)arg1 type:(long long)arg2 priority:(long long)arg3;
- (void)registerEndpoint:(id)arg1 type:(long long)arg2 priority:(long long)arg3 options:(id)arg4;
- (void)registerEndpoint:(id)arg1 type:(long long)arg2 priority:(long long)arg3 transport:(long long)arg4;
- (void)registerEndpoint:(id)arg1 type:(long long)arg2 priority:(long long)arg3 transport:(long long)arg4 requireEncryption:(bool)arg5;
- (void)setDelegate:(id)arg1;
- (void)setLinkRequirementsForPeer:(id)arg1 packetsPerSecond:(unsigned int)arg2 inputBytesPerSecond:(unsigned int)arg3 outputBytesPerSecond:(unsigned int)arg4;
- (void)setLinkRequirementsForPeer:(id)arg1 withClientName:(id)arg2 packetsPerSecond:(unsigned int)arg3 inputBytesPerSecond:(unsigned int)arg4 outputBytesPerSecond:(unsigned int)arg5;
- (void)setLinkRequirementsForPeerWithLatency:(id)arg1 latencyInMs:(unsigned int)arg2 inputBytesPerSecond:(unsigned int)arg3 outputBytesPerSecond:(unsigned int)arg4;
- (id)sharedPairingAgent;
- (void)unregisterAllEndpoints;
- (void)unregisterEndpoint:(id)arg1;

@end
