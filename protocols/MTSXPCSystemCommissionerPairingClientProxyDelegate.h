
@protocol MTSXPCSystemCommissionerPairingClientProxyDelegate

@required

- (void)clientProxy:(void *)arg1 fetchSystemCommissionerPairingsWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: MTSXPCClientProxy *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)clientProxy:(void *)arg1 removeSystemCommissionerPairingWithUUID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: MTSXPCClientProxy *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
