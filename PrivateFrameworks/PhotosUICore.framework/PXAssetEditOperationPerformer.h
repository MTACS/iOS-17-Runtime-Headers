
@interface PXAssetEditOperationPerformer : PXAction {
    <PXDisplayAsset> * _asset;
    NSString * _editOperationType;
    NSProgress * _progress;
}

@property (nonatomic, readonly) <PXDisplayAsset> *asset;
@property (nonatomic, readonly, copy) NSString *editOperationType;
@property (nonatomic, readonly) NSProgress *progress;

- (void).cxx_destruct;
- (id)asset;
- (id)editOperationType;
- (id)init;
- (id)initWithEditOperationType:(id)arg1 asset:(id)arg2;
- (id)progress;

@end
