
@interface DRSTaskingCloudKitHelper : NSObject {
    CKContainer * __targetContainer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) CKContainer *_targetContainer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)prodContainerHelper;
+ (id)sandboxContainerHelper;
+ (id)taskingDeviceMetadata;

- (void).cxx_destruct;
- (id)_operationWithFunctionName:(id)arg1;
- (void)_recordPBMessage:(id)arg1 forFunction:(id)arg2;
- (void)_submitOperationWithName:(id)arg1 requestObject:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)_targetContainer;
- (id)_taskingConfigMetadataForTeamID:(id)arg1 uuidString:(id)arg2;
- (id)initWithContainer:(id)arg1;
- (void)reportTaskingConfigCompletion:(id)arg1 uuidString:(id)arg2 completionType:(id)arg3 completionDescription:(id)arg4 activeDuration:(double)arg5 transaction:(id)arg6 completionHandler:(id /* block */)arg7;
- (void)reportTaskingConfigReceipt:(id)arg1 uuidString:(id)arg2 receiptResult:(id)arg3 transaction:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)reportTaskingSystemMessageReceipt:(id)arg1 messageType:(id)arg2 channelType:(id)arg3 channelEnvironment:(id)arg4 dateBroadcast:(id)arg5 dateReceived:(id)arg6 transaction:(id)arg7 completionHandler:(id /* block */)arg8;
- (id)workQueue;

@end
