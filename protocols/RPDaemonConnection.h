
@protocol RPDaemonConnection <NSObject>

@required

- (id)initWithConnection:(NSXPCConnection *)arg1;
- (void)invalidate;
- (<RPCompanionLinkXPCServerInterface> *)remoteObjectProxy;
- (<RPCompanionLinkXPCServerInterface> *)remoteObjectProxyWithErrorHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
