
@interface RPWirelessPairingSession : NSObject {
    RPWirelessPairingSession_Internal * _underlyingObject;
}

@property (nonatomic, readonly) bool invalidated;
@property (nonatomic, readonly) RPWirelessPairingSession_Internal *underlyingObject;

- (void).cxx_destruct;
- (void)endSession;
- (id)initWithUnderlyingObject:(id)arg1;
- (bool)invalidated;
- (void)registerInvalidationHandlerOnQueue:(id)arg1 handler:(id /* block */)arg2;
- (id)underlyingObject;

@end
