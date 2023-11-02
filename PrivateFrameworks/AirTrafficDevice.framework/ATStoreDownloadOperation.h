
@interface ATStoreDownloadOperation : ICRequestOperation {
    ATStoreDownloadOperationResult * __operationResult;
    ATAsset * _asset;
}

@property (nonatomic) ATStoreDownloadOperationResult *_operationResult;
@property (nonatomic, readonly) ATAsset *asset;

- (void).cxx_destruct;
- (id)_operationResult;
- (id)asset;
- (id)description;
- (void)finishWithError:(id)arg1 operationResult:(id)arg2;
- (id)initWithAsset:(id)arg1;
- (void)performOnOperationQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)set_operationResult:(id)arg1;

@end
