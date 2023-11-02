
@interface ATXModeSetupPredictionFeaturesCorrelator : NSObject {
    unsigned long long  _mode;
    ATXModeSetupPredictionFeatures * _modeSetupPredictionFeatures;
}

- (void).cxx_destruct;
- (void)createFeatureVectorWithModeSetupPredictionFeatures;
- (id)featureVector;
- (unsigned long long)globalPosterConfigurationsCount;
- (id)initWithMode:(unsigned long long)arg1 features:(id)arg2;
- (bool)isDigestCurrentlyEnabled;

@end
