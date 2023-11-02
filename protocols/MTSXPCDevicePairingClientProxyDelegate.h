
@protocol MTSXPCDevicePairingClientProxyDelegate <NSObject>

@required

- (void)clientProxy:(void *)arg1 fetchDevicePairingsForSystemCommissionerPairingUUID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: MTSXPCClientProxy *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)clientProxy:(void *)arg1 openCommissioningWindowForSystemCommissionerPairingUUID:(void *)arg2 duration:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 11: MTSXPCClientProxy *, NSUUID *, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSError *, void*
- (void)clientProxy:(void *)arg1 readCommissioningWindowStatusForSystemCommissionerPairingUUID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: MTSXPCClientProxy *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)clientProxy:(void *)arg1 removeAllDevicePairingsForSystemCommissionerPairingUUID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: MTSXPCClientProxy *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)clientProxy:(void *)arg1 removeDevicePairingWithUUID:(void *)arg2 forSystemCommissionerPairingUUID:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: MTSXPCClientProxy *, NSUUID *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
