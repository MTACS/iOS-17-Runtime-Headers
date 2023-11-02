
@interface HDMCAnalysisQueryServer : HDQueryServer <HDMCAnalysisManagerObserver> {
    HKMCAnalysis * _analysis;
    HKMCAnalysisQueryConfiguration * _configuration;
    HDMCProfileExtension * _profileExtension;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5;
+ (Class)queryClass;
+ (id)requiredEntitlements;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_analysisQueryClientProxy;
- (void)_handleAnalysis:(id)arg1;
- (void)_queue_start;
- (void)_queue_stop;
- (bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (void)analysisManager:(id)arg1 didUpdateAnalysis:(id)arg2;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 profileExtension:(id)arg5;
- (id)objectTypes;

@end
