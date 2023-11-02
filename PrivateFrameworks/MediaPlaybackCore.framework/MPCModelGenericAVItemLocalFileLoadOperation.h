
@interface MPCModelGenericAVItemLocalFileLoadOperation : MPAsyncOperation {
    MPCModelGenericAVItemAssetLoadProperties * _assetLoadProperties;
    MPCAssetLoadPropertiesLocalFileEvaluation * _fileAssetEvaluation;
    bool  _requirePreferredAssetQuality;
    id /* block */  _responseHandler;
}

@property (nonatomic, readonly) MPCModelGenericAVItemAssetLoadProperties *assetLoadProperties;
@property (nonatomic, readonly) MPCAssetLoadPropertiesLocalFileEvaluation *fileAssetEvaluation;
@property (nonatomic) bool requirePreferredAssetQuality;
@property (nonatomic, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (id)assetLoadProperties;
- (void)execute;
- (id)fileAssetEvaluation;
- (id)initWithEvaluation:(id)arg1 properties:(id)arg2;
- (bool)requirePreferredAssetQuality;
- (id /* block */)responseHandler;
- (void)setRequirePreferredAssetQuality:(bool)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end
