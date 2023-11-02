
@interface SESDCKAssertion : NSObject <SESDCKAssertionCallbackInterface> {
    NSString * _keyIdentifier;
    NSObject<SESDCKAssertionInterface><NSXPCProxyCreating> * _proxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *keyIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didInvalidate;
- (id)initWithKeyIdentifier:(id)arg1;
- (void)invalidate;
- (id)keyIdentifier;
- (id)proxy;
- (void)setProxy:(id)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
