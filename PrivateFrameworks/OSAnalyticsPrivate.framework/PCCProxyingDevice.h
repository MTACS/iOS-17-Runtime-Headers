
@interface PCCProxyingDevice : NSObject <NSXPCListenerDelegate, OSASyncProxyHandler, OSASyncProxyServices> {
    PCCEndpoint * _endpoint;
    NSObject<OS_dispatch_source> * _expiryTimer;
    NSDate * _lastTouch;
    NSMutableDictionary * _reqById;
    NSMutableDictionary * _reqByTracker;
    double  _requestTimeout;
    NSObject<OS_dispatch_queue> * _request_queue;
    NSObject<OS_dispatch_queue> * _sync_proxy_queue;
    NSMutableDictionary * _sync_summary;
    NSMutableDictionary * _tasking_summary;
    NSObject<OS_os_transaction> * _txn;
    int  expire_count;
    int  file_count;
    int  msg_count;
    int  request_count;
    int  up_count;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property double requestTimeout;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)ack:(id)arg1 result:(bool)arg2 error:(id)arg3;
- (void)addRequest:(id)arg1 event:(id)arg2 type:(id)arg3 onComplete:(id /* block */)arg4;
- (void)deliver:(id)arg1 tasking:(id)arg2 taskId:(id)arg3 fromBlob:(id)arg4;
- (void)diagnosticResultsEvent:(id)arg1 type:(id)arg2 result:(id)arg3;
- (void)finishRequest:(id)arg1 result:(id)arg2;
- (void)finishRequestWithMessage:(id)arg1 result:(id)arg2;
- (void)handleConnection:(bool)arg1 from:(id)arg2;
- (void)handleFile:(id)arg1 from:(id)arg2 metadata:(id)arg3;
- (void)handleMessage:(id)arg1 from:(id)arg2;
- (id)initWithEndpoint:(id)arg1;
- (bool)isFilenameReasonable:(id)arg1;
- (void)listDevices:(id /* block */)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)receivedReport:(id)arg1 from:(id)arg2 metadata:(id)arg3;
- (void)request:(id)arg1 logList:(id /* block */)arg2;
- (void)request:(id)arg1 logListWithOptions:(id)arg2 onComplete:(id /* block */)arg3;
- (void)request:(id)arg1 transferGroupWithOptions:(id)arg2 onComplete:(id /* block */)arg3;
- (void)request:(id)arg1 transferLog:(id)arg2 onComplete:(id /* block */)arg3;
- (void)request:(id)arg1 transferLog:(id)arg2 withOptions:(id)arg3 onComplete:(id /* block */)arg4;
- (void)requestProxyMetadata:(id)arg1 onComplete:(id /* block */)arg2;
- (double)requestTimeout;
- (void)setRequestTimeout:(double)arg1;
- (void)startRequest:(id)arg1 message:(id)arg2 onComplete:(id /* block */)arg3;
- (void)startTimer;
- (void)summarizeLog:(id)arg1 reason:(id)arg2;
- (void)synchronize:(id)arg1 withOptions:(id)arg2 onComplete:(id /* block */)arg3;
- (void)updateProxiedDeviceMetadata:(id)arg1 from:(id)arg2;

@end
