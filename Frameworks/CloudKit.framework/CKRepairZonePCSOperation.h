
@interface CKRepairZonePCSOperation : CKDatabaseOperation <CKRepairZonePCSOperationCallbacks> {
    NSArray * _zoneIDs;
    id /* block */  _zoneRepairedBlock;
}

@property (nonatomic, readonly) <CKRepairZonePCSOperationCallbacks> *clientOperationCallbackProxy;
@property (nonatomic, readonly) CKRepairZonePCSOperationInfo *operationInfo;
@property (nonatomic, retain) NSArray *zoneIDs;
@property (nonatomic, copy) id /* block */ zoneRepairedBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)handleZonePCSRepairForID:(id)arg1 pcsInfo:(id)arg2 error:(id)arg3;
- (bool)hasCKOperationCallbacksSet;
- (id)initWithZoneIDsToRepair:(id)arg1;
- (void)setZoneIDs:(id)arg1;
- (void)setZoneRepairedBlock:(id /* block */)arg1;
- (id)zoneIDs;
- (id /* block */)zoneRepairedBlock;

@end
