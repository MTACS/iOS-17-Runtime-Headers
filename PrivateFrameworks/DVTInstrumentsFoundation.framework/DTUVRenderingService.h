
@interface DTUVRenderingService : DTXService {
    DTXConnection * _connection;
}

+ (void)registerCapabilities:(id)arg1;

- (void).cxx_destruct;
- (bool)_launchCLIFromPath:(id)arg1 message:(id)arg2 arguments:(id)arg3 environment:(id)arg4 error:(id*)arg5;
- (id)initWithChannel:(id)arg1;
- (void)messageReceived:(id)arg1;
- (bool)processCommand:(id)arg1 fromMessage:(id)arg2 error:(id*)arg3;
- (bool)processConnectToPreviewHostFromMessage:(id)arg1 error:(id*)arg2;
- (bool)processForwardMessageFromMessage:(id)arg1 error:(id*)arg2;
- (bool)processMessage:(id)arg1 error:(id*)arg2;
- (bool)processStartCLIFromMessage:(id)arg1 error:(id*)arg2;

@end
