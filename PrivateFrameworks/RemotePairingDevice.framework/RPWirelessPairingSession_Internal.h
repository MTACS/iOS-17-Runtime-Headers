
@interface RPWirelessPairingSession_Internal : NSObject {
    void _connection;
    void _invalidationHandlers;
    void _lock;
    void _state;
}

@property (nonatomic, readonly) bool invalidated;

- (void).cxx_destruct;
- (void)dealloc;
- (void)endSession;
- (id)init;
- (bool)invalidated;
- (void)registerInvalidationHandlerWithInvokingOnQueue:(id)arg1 handler:(id /* block */)arg2;

@end
