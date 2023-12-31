
@interface MFLANHandoffAgent : NSObject {
    id /* block */  _connectCallbackBlock;
    MFLANHandoffContext * _handoffContext;
    struct __CFRunLoopSource { } * _serverRunLoopSource;
    bool  _serverRunning;
    struct __CFSocket { } * _socket;
}

@property (nonatomic, readonly) MFLANHandoffContext *handoffContext;
@property (nonatomic, readonly) bool serverRunning;

- (void)_cleanupRunLoopSource;
- (void)_cleanupSocket;
- (id)_getDeviceHostname;
- (void)_socketListenerRunLoop;
- (void)connectToServerWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)handoffContext;
- (id)init;
- (bool)serverRunning;
- (id)startServerWithCompletion:(id /* block */)arg1;
- (void)stopServer;

@end
