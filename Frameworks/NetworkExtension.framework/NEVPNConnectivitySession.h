
@interface NEVPNConnectivitySession : NSObject {
    NEConfiguration * _configuration;
    <NEVPNConnectivitySessionDelegate> * _delegate;
    id /* block */  _pendingCancelCompletionHandler;
    NSObject<OS_dispatch_queue> * _queue;
    void * _session;
}

- (void).cxx_destruct;

@end
