
@interface TRIXPCHandlerWrapper : NSObject {
    Protocol * _protocol;
    NSObject * _underlying;
}

+ (id)_symbolicatedBacktraceWithAddresses:(id)arg1 unresolvedSymbols:(id)arg2;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)initWithUnderlyingHandler:(id)arg1 forProtocol:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
