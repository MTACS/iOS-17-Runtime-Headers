
@interface AXMMobileAssetEvaluationNode : AXMEvaluationNode {
    unsigned long long  _formatVersion;
    NSArray * _mlModels;
    NSURL * _mobileAssetBaseURL;
}

@property (nonatomic, readonly) NSArray *mlModels;
@property (nonatomic, readonly) NSURL *mobileAssetBaseURL;

- (void).cxx_destruct;
- (void)_downloadAssetsIfNecessary;
- (id)contentVersionKey;
- (void)evaluate:(id)arg1 metrics:(id)arg2;
- (unsigned long long)formatVersion;
- (id)initWithIdentifier:(id)arg1;
- (unsigned long long)maxSupportedFormatVersion;
- (unsigned long long)minSupportedFormatVersion;
- (id)mlModelClasses;
- (id)mlModels;
- (id)mobileAssetBaseURL;
- (id)mobileAssetType;
- (id)modelResourceNames;
- (id)modelURLs;
- (void)setModelURLs:(id)arg1;

@end
