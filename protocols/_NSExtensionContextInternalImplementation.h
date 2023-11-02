
@protocol _NSExtensionContextInternalImplementation <NSObject>

@required

- (NSUUID *)_UUID;
- (NSXPCConnection *)_auxiliaryConnection;
- (struct { unsigned int x1[8]; })_extensionHostAuditToken;
- (id)_principalObject;
- (id /* block */)_requestCleanUpBlock:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL
- (void)_setRequestCleanUpBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)cancelRequestWithError:(NSError *)arg1;
- (void)completeRequestReturningItems:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (id)initWithInputItems:(NSArray *)arg1 listenerEndpoint:(NSXPCListenerEndpoint *)arg2 contextUUID:(NSUUID *)arg3 extensionContext:(NSExtensionContext *)arg4;
- (NSArray *)inputItems;
- (void)openURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
