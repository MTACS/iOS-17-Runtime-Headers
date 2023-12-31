
@interface MPCModelGenericAVItemHomeSharingLoadOperation : MPAsyncOperation {
    MPCModelGenericAVItemAssetLoadProperties * _assetLoadProperties;
    id /* block */  _responseHandler;
}

@property (nonatomic, retain) MPCModelGenericAVItemAssetLoadProperties *assetLoadProperties;
@property (nonatomic, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (id)assetLoadProperties;
- (void)execute;
- (id /* block */)responseHandler;
- (void)setAssetLoadProperties:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end
