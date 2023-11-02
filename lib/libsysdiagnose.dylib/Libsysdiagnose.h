
@interface Libsysdiagnose : NSObject

+ (int)addErrorString:(id)arg1 WithCode:(id)arg2 forError:(id*)arg3;
+ (bool)cancelActiveSysdiagnoseWithError:(id*)arg1;
+ (void)createMetrics:(id*)arg1 fromResponse:(id)arg2;
+ (id)createSysdiagnoseRequest:(id)arg1;
+ (id)fetchDiagnosticIDFromDeviceSource:(unsigned long long)arg1 WithMaxCount:(unsigned long long)arg2 withError:(id*)arg3;
+ (id)fetchRemoteDiagnosticIDsWithError:(id*)arg1;
+ (id)getSysdiagnoseCrashLog;
+ (bool)isSysdiagnoseInProgressWithError:(id*)arg1;
+ (id)sendSysdiagnoseRequest:(id)arg1 withMetrics:(id*)arg2 withError:(id*)arg3 withProgressHandler:(id /* block */)arg4;
+ (id)setupConnection;
+ (void)sysdiagnoseWithMetadata:(id)arg1 onCompletion:(id /* block */)arg2;
+ (id)sysdiagnoseWithMetadata:(id)arg1 withError:(id*)arg2;
+ (id)sysdiagnoseWithMetadata:(id)arg1 withError:(id*)arg2 andProgressHandler:(id /* block */)arg3;
+ (id)sysdiagnoseWithMetadata:(id)arg1 withError:(id*)arg2 withProgressHandler:(id /* block */)arg3;
+ (id)sysdiagnoseWithMetadata:(id)arg1 withMetrics:(id*)arg2 withError:(id*)arg3;
+ (id)sysdiagnoseWithMetadata:(id)arg1 withMetrics:(id*)arg2 withError:(id*)arg3 withProgressCallback:(id /* block */)arg4;
+ (id)sysdiagnoseWithMetadata:(id)arg1 withMetrics:(id*)arg2 withError:(id*)arg3 withProgressHandler:(id /* block */)arg4;
+ (bool)verifyReply:(id)arg1 withExpectedType:(struct _xpc_type_s { }*)arg2 forError:(id*)arg3;

@end
