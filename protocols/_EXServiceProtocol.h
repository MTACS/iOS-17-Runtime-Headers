
@protocol _EXServiceProtocol

@required

- (void)beginExtensionsQuery:(void *)arg1 listenerEndpoint:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: _EXQuery *, NSXPCListenerEndpoint *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)extensionsWithQuery:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: _EXQuery *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _EXQueryResult *, NSError *, void*
- (void)invalidateLaunchAssertionsForExtensionAuditToken:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: struct { unsigned int x1[8]; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)photoServiceAuthorizationStatusForExtensionUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)prepareWithLaunchConfiguration:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: _EXLaunchConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _EXExtensionProcessHandle *, NSError *, void*

@end
