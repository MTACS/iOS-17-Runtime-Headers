
@interface ATStoreDownloadAssetsOperation : ATStoreDownloadOperation {
    ATStoreDownloadOperationResult * _prepareOperationResult;
}

@property (nonatomic, readonly) ATStoreDownloadOperationResult *prepareOperationResult;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithAsset:(id)arg1 prepareOperationResult:(id)arg2;
- (id)prepareOperationResult;

@end
