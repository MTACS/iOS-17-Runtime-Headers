
@interface CDPLocalDeviceSecretHandler : NSObject {
    CDPContext * _context;
    <CDPLocalDeviceSecretHandlerProtocol> * _handlerProxy;
}

@property (nonatomic, readonly) CDPContext *context;

- (void).cxx_destruct;
- (id)context;
- (id)initWithContext:(id)arg1 handler:(id)arg2;
- (void)userDidCancelWithError:(id)arg1;
- (void)userDidEnterValidSecret:(id)arg1 type:(unsigned long long)arg2;

@end
