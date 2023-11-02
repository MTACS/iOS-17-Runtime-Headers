
@protocol CRKIDSLocalPrimitives

@required

- (NSArray *)accounts;
- (NSDictionary *)debugInfo;
- (void)fetchFirewallWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CRKIDSFirewall> *, NSError *, void*
- (void)forceRefreshIDStatusForDestinations:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (bool)isRemoteUserNotRegisteredError:(NSError *)arg1;
- (NSError *)makeRemoteUserNotRegisteredError;
- (bool)sendMessage:(NSDictionary *)arg1 toAddress:(NSString *)arg2 fromID:(NSString *)arg3 options:(CRKIDSMessageOptions *)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (<CRKCancelable><CRKResumable> *)subscribeToMessageReceivesWithHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSString *, NSString *, void*
- (<CRKCancelable><CRKResumable> *)subscribeToMessageSendsWithHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, bool, NSError *, void*

@end
