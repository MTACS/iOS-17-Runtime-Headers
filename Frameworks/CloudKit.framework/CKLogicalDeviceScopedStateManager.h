
@interface CKLogicalDeviceScopedStateManager : NSObject <CKXPCLogicalDeviceScopedClient> {
    NSMapTable * _assetsByUUID;
    NSMutableSet * _completedLongLivedOperationIDs;
    CKLogicalDeviceContext * _deviceContext;
    NSMutableSet * _outstandingOperationIDs;
}

@property (nonatomic, readonly) NSMapTable *assetsByUUID;
@property (nonatomic, readonly) NSMutableSet *completedLongLivedOperationIDs;
@property (nonatomic, readonly) CKLogicalDeviceContext *deviceContext;
@property (nonatomic, readonly) NSMutableSet *outstandingOperationIDs;

- (void).cxx_destruct;
- (void)addThrottle:(id)arg1;
- (id)assetsByUUID;
- (id)completedLongLivedOperationIDs;
- (id)deviceContext;
- (id)initWithDeviceContext:(id)arg1;
- (void)openFileWithOpenInfo:(id)arg1 reply:(id /* block */)arg2;
- (id)outstandingOperationIDs;
- (void)readBytesOfInMemoryAssetContentWithUUID:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)registerLongLivedOperationWithIDAsCompleted:(id)arg1 allowResumingCompletedLongLivedOperations:(bool)arg2;
- (void)registerLongLivedOperationWithIDAsOutstanding:(id)arg1;
- (void)resetThrottles;
- (void)trackAssets:(id)arg1;
- (id)trackedAssetForUUID:(id)arg1;

@end
