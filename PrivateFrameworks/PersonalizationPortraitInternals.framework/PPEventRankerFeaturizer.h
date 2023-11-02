
@interface PPEventRankerFeaturizer : NSObject {
    PPTrialWrapper * _trialWrapper;
}

+ (void)clearAssetCache;
+ (id)scoreFeatureSchema:(id)arg1;

- (void).cxx_destruct;
- (id)featureSchema;
- (id)initWithTrialWrapper:(id)arg1;

@end
