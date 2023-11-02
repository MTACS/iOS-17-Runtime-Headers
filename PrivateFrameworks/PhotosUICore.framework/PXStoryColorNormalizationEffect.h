
@interface PXStoryColorNormalizationEffect : PXGColorGradingEffect {
    PFStoryRecipeDisplayAssetNormalization * _assetNormalization;
    long long  _currentRequestID;
    PXStoryColorNormalizationCubeLibrary * _library;
}

@property (nonatomic, retain) PFStoryRecipeDisplayAssetNormalization *assetNormalization;
@property (nonatomic) long long currentRequestID;
@property (nonatomic, readonly) NSString *effectDetails;
@property (nonatomic, readonly) NSString *effectSummary;

- (void).cxx_destruct;
- (void)_handleResult:(id)arg1 resultType:(unsigned long long)arg2 requestID:(long long)arg3;
- (void)_updateColorLookupCube;
- (id)assetNormalization;
- (long long)currentRequestID;
- (id)effectDetails;
- (id)effectSummary;
- (id)initWithEntityManager:(id)arg1;
- (void)setAssetNormalization:(id)arg1;
- (void)setCurrentRequestID:(long long)arg1;

@end
