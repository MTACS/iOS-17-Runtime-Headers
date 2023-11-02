
@protocol NRNSXPCConnectionProtocol <NSObject>

@required

- (void)_setQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (NSXPCInterface *)exportedInterface;
- (id)exportedObject;
- (id)initWithMachServiceName:(NSString *)arg1 options:(unsigned long long)arg2;
- (id /* block */)interruptionHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)invalidate;
- (id /* block */)invalidationHandler:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (int)processIdentifier;
- (NSString *)processName;
- (NSXPCInterface *)remoteObjectInterface;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resume;
- (void)runCompletionBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setExportedInterface:(NSXPCInterface *)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setInterruptionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setInvalidationHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setRemoteObjectInterface:(NSXPCInterface *)arg1;
- (void)suspend;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (id)valueForEntitlement:(NSString *)arg1;

@end
