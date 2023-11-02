
@interface WPDPipeManager : WPDManager <CBScalablePipeManagerDelegate, NSStreamDelegate> {
    NSMutableDictionary * _connectionInitiators;
    NSMutableDictionary * _endpointsDict;
    NSMutableDictionary * _peerPipesDict;
    CBScalablePipeManager * _pipeManager;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _wpPipeDataSignPostID;
}

@property (retain) NSMutableDictionary *connectionInitiators;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSMutableDictionary *endpointsDict;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableDictionary *peerPipesDict;
@property (retain) CBScalablePipeManager *pipeManager;
@property NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_signpostBegin;
- (void)_signpostEnd;
- (void)channelHasData:(id)arg1;
- (id)connectionInitiators;
- (id)endpointsDict;
- (id)generateStateDumpStrings;
- (void)handleIncomingPipeData:(id)arg1 data:(char *)arg2 dataSize:(long long)arg3;
- (id)initWithServer:(id)arg1;
- (void)invalidatePipeInfo:(id)arg1 forPeer:(id)arg2;
- (id)peerPipesDict;
- (id)pipeInfo:(id)arg1 forClient:(id)arg2;
- (id)pipeManager;
- (id)pipeManagerState:(long long)arg1;
- (id)queue;
- (void)receivedAck:(id)arg1 data:(char *)arg2 dataSize:(long long)arg3;
- (void)receivedConnectStatus:(id)arg1 data:(char *)arg2 dataSize:(long long)arg3;
- (void)receivedError:(id)arg1 data:(char *)arg2 dataSize:(long long)arg3;
- (void)receivedPayload:(id)arg1 data:(char *)arg2 dataSize:(long long)arg3;
- (void)receivedVersionInfo:(id)arg1 data:(char *)arg2 dataSize:(long long)arg3;
- (void)registerEndpoint:(id)arg1 requireAck:(bool)arg2 requireEncryption:(bool)arg3 forClient:(id)arg4;
- (void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;
- (void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;
- (void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;
- (void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;
- (void)sendAck:(id)arg1 errorCode:(unsigned char)arg2;
- (void)sendChannelData:(id)arg1;
- (void)sendConnectStatus:(id)arg1 connectStatus:(unsigned char)arg2;
- (void)sendData:(id)arg1 forPeer:(id)arg2 forClient:(id)arg3;
- (void)sendErrorResponse:(id)arg1 errorCode:(unsigned char)arg2;
- (void)sendRemainingData:(id)arg1 wpClient:(id)arg2;
- (bool)sendVersionInfo:(id)arg1;
- (void)setConnectionInitiator:(bool)arg1 forPeer:(id)arg2 forClient:(id)arg3;
- (void)setConnectionInitiators:(id)arg1;
- (void)setEndpointsDict:(id)arg1;
- (void)setPeerPipesDict:(id)arg1;
- (void)setPipeClientConnectionStatus:(bool)arg1 forPeer:(id)arg2 forClient:(id)arg3;
- (void)setPipeManager:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)streamEvent:(unsigned long long)arg1;
- (void)unregisterEndpoint:(id)arg1 forClient:(id)arg2;
- (void)update;
- (long long)writeDataToPipe:(id)arg1 pipe:(id)arg2;

@end
