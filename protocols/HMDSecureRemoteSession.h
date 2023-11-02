
@protocol HMDSecureRemoteSession <NSObject, HMFDumpState>

@required

- (void)close;
- (<HMFMessageTransportDelegate> *)delegate;
- (HMDDevice *)device;
- (void)openWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)receivedSecureMessage:(HMDRemoteMessage *)arg1 fromDevice:(HMDDevice *)arg2 fromTransport:(HMDRemoteMessageTransport *)arg3;
- (void)sendMessage:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: HMFMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setDelegate:(id <HMFMessageTransportDelegate>)arg1;

@end
