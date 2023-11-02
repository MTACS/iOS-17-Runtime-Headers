
@interface CKDMarkAssetBrokenURLRequest : CKDURLRequest {
    id /* block */  _assetBrokenBlock;
    CKUploadRequestMetadata * _metadata;
    bool  _writeRepairRecord;
}

@property (nonatomic, copy) id /* block */ assetBrokenBlock;
@property (nonatomic, copy) CKUploadRequestMetadata *metadata;
@property (nonatomic) bool writeRepairRecord;

- (void).cxx_destruct;
- (id /* block */)assetBrokenBlock;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (void)fillOutRequestProperties:(id)arg1;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)arg1 assetOrPackageMetadata:(id)arg2 writeRepairRecord:(bool)arg3;
- (id)metadata;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setAssetBrokenBlock:(id /* block */)arg1;
- (void)setMetadata:(id)arg1;
- (void)setWriteRepairRecord:(bool)arg1;
- (bool)writeRepairRecord;

@end
