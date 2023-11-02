
@protocol HMDMessageRouter <NSObject>

@required

- (void)routeMessage:(void *)arg1 allowRemoteRelayFromPrimary:(void *)arg2 localHandler:(void *)arg3; // needs 3 arg types, found 8: HMFMessage *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMFMessage *, void*
- (void)routeMessage:(void *)arg1 localHandler:(void *)arg2; // needs 2 arg types, found 7: HMFMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMFMessage *, void*

@end
