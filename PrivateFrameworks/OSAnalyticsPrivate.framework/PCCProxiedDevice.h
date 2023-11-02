
@interface PCCProxiedDevice : NSObject <OSASyncProxyHandler> {
    PCCEndpoint * _endpoint;
    NSObject<OS_dispatch_source> * _expiryTimer;
    PCCGroupJob * _groupXferJob;
    NSMutableDictionary * _jobByTracker;
    double  _jobTimeout;
    NSObject<OS_dispatch_queue> * _job_queue;
    bool  _preserveFiles;
    NSObject<OS_os_transaction> * _txn;
    int  expire_count;
    int  file_count;
    int  job_count;
    int  msg_count;
    int  up_count;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property double jobTimeout;
@property bool preserveFiles;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)acceptTaskingPayload:(id)arg1 forRouting:(id)arg2 withId:(id)arg3;
- (void)ack:(id)arg1 result:(bool)arg2 error:(id)arg3;
- (bool)doWork:(id)arg1;
- (void)finish:(id)arg1 target:(id)arg2 event:(id)arg3 type:(id)arg4 result:(id)arg5;
- (void)handleConnection:(bool)arg1 from:(id)arg2;
- (void)handleFile:(id)arg1 from:(id)arg2 metadata:(id)arg3;
- (void)handleMessage:(id)arg1 from:(id)arg2;
- (id)initWithEndpoint:(id)arg1;
- (void)initiate:(id)arg1 transferGroupWithOptions:(id)arg2 job:(id)arg3;
- (void)initiate:(id)arg1 transferLog:(id)arg2 withOptions:(id)arg3 job:(id)arg4;
- (double)jobTimeout;
- (bool)preserveFiles;
- (void)sendDeviceMetadata:(id)arg1;
- (void)setJobTimeout:(double)arg1;
- (void)setPreserveFiles:(bool)arg1;
- (void)startTimer;

@end
