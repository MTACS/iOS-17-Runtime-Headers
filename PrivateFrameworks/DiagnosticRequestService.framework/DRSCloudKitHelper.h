
@interface DRSCloudKitHelper : NSObject {
    CKContainer * __targetContainer;
    long long  _environment;
    long long  _rapidEnvironment;
    DRSRapidCloudKitHelper * _rapidHelper;
}

@property (nonatomic, retain) CKContainer *_targetContainer;
@property (nonatomic, readonly) long long environment;
@property (nonatomic, readonly) long long rapidEnvironment;
@property (nonatomic, readonly) DRSRapidCloudKitHelper *rapidHelper;

+ (id)helperForCKConfig:(id)arg1;
+ (id)prodContainerHelper;
+ (id)sandboxContainerHelper;

- (void).cxx_destruct;
- (void)_configureOperation:(id)arg1 container:(id)arg2 xpcActivity:(id)arg3;
- (bool)_handleRAPIDRequests:(id)arg1 xpcActivity:(id)arg2 errorsOut:(id)arg3;
- (id)_requestsPassingUploadSizeCap:(id)arg1 remainingQuota:(unsigned long long)arg2;
- (void)_sendDecisionServerRequests:(id)arg1 xpcActivity:(id)arg2 replyHandler:(id /* block */)arg3;
- (id)_targetContainer;
- (void)_uploadRecords:(id)arg1 containerName:(id)arg2 xpcActivity:(id)arg3 completionHandler:(id /* block */)arg4;
- (long long)environment;
- (id)initWithContainerEnvironment:(long long)arg1 rapidEnvironment:(long long)arg2;
- (id)initWithEnvironment:(long long)arg1;
- (long long)rapidEnvironment;
- (id)rapidHelper;
- (void)reportTerminalRequestStats:(id)arg1 xpcActivity:(id)arg2 replyHandler:(id /* block */)arg3;
- (void)set_targetContainer:(id)arg1;
- (void)shouldEnableDataGathering:(id)arg1 xpcActivity:(id)arg2 replyHandler:(id /* block */)arg3;
- (void)shouldUploadRequests:(id)arg1 xpcActivity:(id)arg2 replyHandler:(id /* block */)arg3;
- (void)uploadRequests:(id)arg1 contactDecisionServer:(bool)arg2 xpcActivity:(id)arg3 remainingUploadQuota:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;

@end
