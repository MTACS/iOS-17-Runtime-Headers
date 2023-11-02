
@interface PLAssetsdBaseClient : NSObject {
    <PLXPCProxyCreating><PLXPCAsyncProxyCreating> * _proxyFactory;
}

@property (readonly) <PLXPCProxyCreating><PLXPCAsyncProxyCreating> *proxyFactory;

- (void).cxx_destruct;
- (id)initWithQueue:(id)arg1 proxyCreating:(id)arg2 proxyGetter:(SEL)arg3;
- (id)proxyFactory;

@end
