
@interface SecKeyProxy : NSObject <NSXPCListenerDelegate> {
    NSData * _certificate;
    id /* block */  _clientConnectionHandler;
    _Atomic long long  _clientCount;
    id /* block */  _clientDisconnectionHandler;
    id  _key;
    NSXPCListener * _listener;
}

@property (nonatomic, copy) id /* block */ clientConnectionHandler;
@property (nonatomic, copy) id /* block */ clientDisconnectionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct __SecIdentity { }*)createIdentityFromEndpoint:(id)arg1 error:(id*)arg2;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)createItemFromEndpoint:(id)arg1 certificate:(id*)arg2 error:(id*)arg3;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)createKeyFromEndpoint:(id)arg1 error:(id*)arg2;
+ (id)targetForKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1 error:(struct __CFError {}**)arg2;

- (void).cxx_destruct;
- (id /* block */)clientConnectionHandler;
- (id /* block */)clientDisconnectionHandler;
- (void)dealloc;
- (id)endpoint;
- (id)initWithIdentity:(struct __SecIdentity { }*)arg1;
- (id)initWithKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1;
- (id)initWithKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1 certificate:(id)arg2;
- (void)invalidate;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setClientConnectionHandler:(id /* block */)arg1;
- (void)setClientDisconnectionHandler:(id /* block */)arg1;

@end
