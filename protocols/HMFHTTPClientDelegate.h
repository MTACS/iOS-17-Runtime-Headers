
@protocol HMFHTTPClientDelegate <NSObject>

@optional

- (void)client:(void *)arg1 didRequestPingWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: HMFHTTPClient *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)clientDidBecomeReachable:(HMFHTTPClient *)arg1;
- (void)clientDidBecomeUnreachable:(HMFHTTPClient *)arg1;

@end
