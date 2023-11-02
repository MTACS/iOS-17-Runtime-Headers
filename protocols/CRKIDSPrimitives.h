
@protocol CRKIDSPrimitives

@required

- (void)addAllowedAppleIDsToFirewall:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSDictionary *)debugInfo;
- (void)fetchFirewallAllowedAppleIDs:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSError *, void*
- (void)removeAllowedAppleIDsFromFirewall:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendMessage:(void *)arg1 destinationAddress:(void *)arg2 sourceAppleID:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSDictionary *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendMessage:(void *)arg1 destinationAddress:(void *)arg2 sourceAppleID:(void *)arg3 options:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSDictionary *, NSString *, NSString *, CRKIDSMessageOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)subscribeToMessagesWithHandler:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 15: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSString *, NSString *, void*, id /* block */, void*, void, id /* block */, <CRKCancelable> *, NSError *, void*

@end
