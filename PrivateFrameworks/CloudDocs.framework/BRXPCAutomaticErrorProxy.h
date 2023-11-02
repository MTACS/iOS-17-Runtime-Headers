
@interface BRXPCAutomaticErrorProxy : FPXPCAutomaticErrorProxy <BRXPCAutomaticErrorProxy> {
    NSXPCConnection * _connection;
    NSFileProviderService * _service;
}

@property unsigned long long timeoutState;

+ (void)decrementConnectionRefCount:(id)arg1;
+ (void)incrementConnectionRefCount:(id)arg1;
+ (bool)sanitizeErrors;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 service:(id)arg2 interface:(id)arg3;
- (void)invalidate;

@end
