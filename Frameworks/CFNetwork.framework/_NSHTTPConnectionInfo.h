
@interface _NSHTTPConnectionInfo : NSObject {
    struct HTTPConnectionInfo { int (**x1)(); } * _httpConnectionInfo;
    NSURLSession * _session;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) bool isValid;

- (void).cxx_destruct;
- (bool)isValid;
- (void)sendPingWithReceiveHandler:(id /* block */)arg1;

@end
