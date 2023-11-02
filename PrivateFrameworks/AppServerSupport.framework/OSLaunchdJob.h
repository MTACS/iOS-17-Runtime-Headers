
@interface OSLaunchdJob : NSObject {
    OSLaunchdDomain * _domain;
    NSUUID * _handle;
    id /* block */  _monitor_handler;
    NSObject<OS_dispatch_queue> * _monitor_queue;
    NSObject<OS_dispatch_source> * _monitor_source;
    NSObject<OS_xpc_object> * _plist;
}

@property (nonatomic, readonly) NSUUID *handle;

+ (id)_createJobFromReplyHandle:(id)arg1;
+ (int)_monitorNormalizeError:(int)arg1;
+ (id)copyJobWithHandle:(id)arg1;
+ (id)copyJobWithLabel:(id)arg1 domain:(id)arg2;
+ (id)copyJobWithPid:(int)arg1;
+ (id)copyJobsManagedBy:(id)arg1 error:(id*)arg2;
+ (bool)disableLogging_4watchdogd;
+ (id)jobInfoFromMessage:(id)arg1;
+ (long long)jobStateFromMessage:(id)arg1;
+ (void)setDisableLogging_4watchdogd:(bool)arg1;
+ (bool)submitAll:(id)arg1 error:(id*)arg2;
+ (id)submitExtension:(id)arg1 overlay:(id)arg2 domain:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)_initWithHandle:(id)arg1;
- (id)_newCreateInstanceRequest:(unsigned char)arg1 properties:(id)arg2;
- (id)_newRequest;
- (id)_newSubmitRequest;
- (void)_populateHandle:(id)arg1;
- (void)_setupMonitorSourceWithPort:(unsigned int)arg1 onQueue:(id)arg2 withHandler:(id /* block */)arg3;
- (void)_startMonitoringAfterSubmit:(id)arg1;
- (void)cancelMonitor;
- (id)createInstance:(unsigned char)arg1 error:(id*)arg2;
- (id)createInstance:(unsigned char)arg1 properties:(id)arg2 error:(id*)arg3;
- (id)description;
- (id)getCurrentJobInfo;
- (id)handle;
- (id)initWithPlist:(id)arg1;
- (id)initWithPlist:(id)arg1 domain:(id)arg2;
- (void)monitorOnQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)processSubmitReply:(id)arg1;
- (bool)remove:(id*)arg1;
- (void)setupMonitorOnQueue:(id)arg1 withHandler:(id /* block */)arg2 reply:(id)arg3;
- (id)start:(id*)arg1;
- (bool)submit:(id*)arg1;
- (id)submitAndStart:(id*)arg1;

@end
