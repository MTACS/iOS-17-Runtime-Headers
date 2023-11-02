
@interface HDMCDiagnosticsServer : HDStandardTaskServer <HDMenstrualCyclesDiagnosticsServerInterface> {
    HDHealthStoreClient * _client;
    HDProfile * _profile;
    HDMCProfileExtension * _profileExtension;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 profileExtension:(id)arg5;
- (id)remoteInterface;
- (void)remote_triggerAnalysisForDiagnosticsWithCompletion:(id /* block */)arg1;

@end
