
@protocol HMDRemoteHomeMessageHandling <NSObject>

@required

- (NSUUID *)homeUUID;
- (void)sendMessage:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: HMFMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
