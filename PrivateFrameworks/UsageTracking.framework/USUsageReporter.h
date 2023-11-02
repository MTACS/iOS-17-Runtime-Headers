
@interface USUsageReporter : NSObject {
    NSXPCConnection * _xpcConnection;
}

@property (readonly) NSXPCConnection *xpcConnection;

+ (id)getLocalDeviceIdentifierAndReturnError:(id*)arg1;
+ (void)synchronizeUsageWithCompletionHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)fetchReportsDuringInterval:(id)arg1 partitionInterval:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchReportsDuringInterval:(id)arg1 partitionInterval:(double)arg2 forceImmediateSync:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)fetchUsageForApplications:(id)arg1 webDomains:(id)arg2 categories:(id)arg3 interval:(id)arg4 error:(id*)arg5;
- (id)getLocalDeviceIdentifierAndReturnError:(id*)arg1;
- (id)init;
- (id)xpcConnection;

@end
