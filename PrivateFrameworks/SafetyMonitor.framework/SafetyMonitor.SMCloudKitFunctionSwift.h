
@interface SafetyMonitor.SMCloudKitFunctionSwift : NSObject {
    void client;
    void container;
    void containerName;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void serviceName;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithServiceName:(id)arg1;
- (void)requestSafetyCacheRecordFromZone:(id)arg1 token:(id)arg2 completion:(id /* block */)arg3;

@end
