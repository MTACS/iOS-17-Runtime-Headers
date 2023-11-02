
@interface PXVideoStabilizationRecipeSource : NSObject {
    unsigned long long  _allowedAnalysisTypes;
    bool  _allowsOnDemandPixelAnalysis;
    NSDictionary * _analyticsPayload;
    NSDictionary * _debugInfo;
    long long  _recipeLoadSignpost;
}

@property (nonatomic) unsigned long long allowedAnalysisTypes;
@property (nonatomic) bool allowsOnDemandPixelAnalysis;
@property (nonatomic, copy) NSDictionary *analyticsPayload;
@property (nonatomic, copy) NSDictionary *debugInfo;

- (void).cxx_destruct;
- (id)_loadStabilizationRecipe:(id*)arg1 analysisType:(out unsigned long long*)arg2;
- (unsigned long long)allowedAnalysisTypes;
- (bool)allowsOnDemandPixelAnalysis;
- (id)analyticsPayload;
- (id)debugInfo;
- (id)init;
- (id)loadStabilizationRecipe:(id*)arg1 analysisType:(out unsigned long long*)arg2;
- (void)setAllowedAnalysisTypes:(unsigned long long)arg1;
- (void)setAllowsOnDemandPixelAnalysis:(bool)arg1;
- (void)setAnalyticsPayload:(id)arg1;
- (void)setDebugInfo:(id)arg1;

@end
