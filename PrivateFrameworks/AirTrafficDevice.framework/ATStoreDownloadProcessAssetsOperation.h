
@interface ATStoreDownloadProcessAssetsOperation : ATStoreDownloadOperation {
    ATStoreDownloadOperationResult * _assetsOperationResult;
}

@property (nonatomic, readonly) ATStoreDownloadOperationResult *assetsOperationResult;

- (void).cxx_destruct;
- (id)assetsOperationResult;
- (void)execute;
- (id)initWithAsset:(id)arg1 assetsOperationResult:(id)arg2;

@end
