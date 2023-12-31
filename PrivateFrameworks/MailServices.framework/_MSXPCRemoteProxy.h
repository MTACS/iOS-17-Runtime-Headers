
@interface _MSXPCRemoteProxy : NSObject <NSXPCProxyCreating> {
    id  ____nsxpc_remoteObjectProxy;
    MSXPCConnection * _connection;
    id /* block */  _errorHandler;
    struct __CFDictionary { } * _knownSelectors;
    NSXPCInterface * _remoteInterface;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _selectorLock;
}

@property (setter=___setNSXPCRemoteObjectProxy:, nonatomic, retain) id ___nsxpc_remoteObjectProxy;

- (void).cxx_destruct;
- (id)___nsxpc_remoteObjectProxy;
- (void)___setNSXPCRemoteObjectProxy:(id)arg1;
- (bool)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithConnection:(id)arg1 interface:(id)arg2 errorHandler:(id /* block */)arg3;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
