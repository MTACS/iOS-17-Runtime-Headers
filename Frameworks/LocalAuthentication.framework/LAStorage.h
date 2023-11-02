
@interface LAStorage : NSObject {
    struct __SecAccessControl { } * _accessControl;
    LAContext * _authenticationContext;
    NSXPCConnection * _connection;
    long long  _domain;
    unsigned int  _instanceId;
    <LASecureStorageService> * _remoteObjectProxy;
}

@property (nonatomic) struct __SecAccessControl { }*accessControl;
@property (nonatomic, readonly) LAContext *authenticationContext;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic, readonly) long long domain;
@property (nonatomic, readonly) unsigned int instanceId;
@property (nonatomic, readonly) <LASecureStorageService> *remoteObjectProxy;

+ (id)additionalBoolEntitlementForKey:(long long)arg1 operation:(long long)arg2 value:(id)arg3;
+ (Class)classForKey:(long long)arg1;
+ (bool)isKeyAvailable:(long long)arg1;
+ (id)maxDataLengthForKey:(long long)arg1;
+ (id)minDataLengthForKey:(long long)arg1;
+ (unsigned int)newInstanceId;
+ (id)objectDescription:(id)arg1;
+ (long long)policyForKey:(long long)arg1 operation:(long long)arg2 value:(id)arg3;

- (void).cxx_destruct;
- (void)_bootstrapServiceType:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_bootstrapServiceWithAuthenticationPolicy:(long long)arg1 proxyBlock:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (void)_callProxyBlock:(id /* block */)arg1 authenticationPolicy:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)_class:(Class)arg1 forKey:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)_connectToEndpoint:(id)arg1;
- (void)_resetConnection;
- (struct __SecAccessControl { }*)accessControl;
- (struct __SecAccessControl { }*)accessControlForKey:(long long)arg1 error:(id*)arg2;
- (id)authenticationContext;
- (bool)boolForKey:(long long)arg1;
- (void)boolForKey:(long long)arg1 completionHandler:(id /* block */)arg2;
- (bool)boolForKey:(long long)arg1 error:(id*)arg2;
- (id)connection;
- (id)dataForKey:(long long)arg1;
- (void)dataForKey:(long long)arg1 completionHandler:(id /* block */)arg2;
- (id)dataForKey:(long long)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)description;
- (long long)domain;
- (id)initWithDomain:(long long)arg1 authenticationContext:(id)arg2;
- (unsigned int)instanceId;
- (void)objectForKey:(long long)arg1 completionHandler:(id /* block */)arg2;
- (id)remoteObjectProxy;
- (void)removeObjectForKey:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setAccessControl:(struct __SecAccessControl { }*)arg1;
- (void)setBool:(bool)arg1 forKey:(long long)arg2 completionHandler:(id /* block */)arg3;
- (bool)setBool:(bool)arg1 forKey:(long long)arg2 error:(id*)arg3;
- (void)setData:(id)arg1 forKey:(long long)arg2 completionHandler:(id /* block */)arg3;
- (bool)setData:(id)arg1 forKey:(long long)arg2 error:(id*)arg3;
- (void)setObject:(id)arg1 forKey:(long long)arg2 completionHandler:(id /* block */)arg3;

@end
