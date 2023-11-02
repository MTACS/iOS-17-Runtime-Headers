
@interface VUIFeatureManager : NSObject {
    NSDictionary * _features;
}

@property (nonatomic, retain) NSDictionary *features;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_allFeatures;
- (id)availableFeatures;
- (id)features;
- (id)init;
- (bool)isDownloadPurchasesInAppFeatureEnabled;
- (bool)isFeatureEnabled:(id)arg1;
- (id)osFeatureFlagsJSON;
- (void)setFeatureValue:(bool)arg1 forFeature:(id)arg2;
- (void)setFeatures:(id)arg1;
- (bool)useJetPackAssetSession;

@end
