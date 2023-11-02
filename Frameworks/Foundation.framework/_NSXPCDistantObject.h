
@interface _NSXPCDistantObject : NSObject <NSSecureCoding, NSXPCProxyCreating> {
    NSXPCConnection * _connection;
    id /* block */  _errorBlock;
    unsigned long long  _flags;
    unsigned long long  _generationCount;
    unsigned long long  _proxyNumber;
    NSXPCInterface * _remoteInterface;
    double  _timeout;
    NSDictionary * _userInfo;
}

@property (readonly, retain) NSXPCConnection *_connection;
@property (copy) NSDictionary *_userInfo;

+ (bool)supportsSecureCoding;

- (id)_connection;
- (void)_forwardStackInvocation:(id)arg1;
- (id)_initWithConnection:(id)arg1 exportedObject:(id)arg2 interface:(id)arg3;
- (id)_initWithConnection:(id)arg1 proxyNumber:(unsigned long long)arg2 generationCount:(unsigned long long)arg3 interface:(id)arg4 options:(unsigned long long)arg5 error:(id /* block */)arg6;
- (id)_unboostingRemoteObjectProxy;
- (id)_userInfo;
- (bool)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)remoteObjectProxyWithTimeout:(double)arg1 errorHandler:(id /* block */)arg2;
- (id)remoteObjectProxyWithUserInfo:(id)arg1 errorHandler:(id /* block */)arg2;
- (bool)respondsToSelector:(SEL)arg1;
- (void)set_userInfo:(id)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
