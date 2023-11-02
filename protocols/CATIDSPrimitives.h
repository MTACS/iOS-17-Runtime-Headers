
@protocol CATIDSPrimitives

@required

- (void)addMessageHandler:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 15: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSString *, NSString *, void*, id /* block */, void*, void, id /* block */, <CATIDSSubscription> *, NSError *, void*
- (NSString *)addressForAppleID:(NSString *)arg1;
- (void)sendMessage:(void *)arg1 toAddress:(void *)arg2 fromID:(void *)arg3 options:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSDictionary *, NSString *, NSString *, CATIDSMessageOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
