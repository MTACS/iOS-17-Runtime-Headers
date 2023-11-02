
@interface SGMITrialClientWrapper : NSObject {
    _PASLock * _lock;
    TRIClient * _triClient;
}

@property (nonatomic, retain) TRIClient *triClient;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_loadPlistFromPath:(id)arg1 expectedClass:(Class)arg2 error:(id*)arg3;
- (id)arrayFromPathWithPrefix:(id)arg1 suffix:(id)arg2;
- (id)attachmentDetectionRegexes;
- (id)attachmentLinkDetection;
- (id)bodyAnalysisSamplingFactor;
- (id)classificationOfflinePrecision;
- (id)classificationOfflineRecall;
- (id)classificationThreshold;
- (id)concatPathWithPrefix:(id)arg1 suffix:(id)arg2 extra:(id)arg3;
- (id)conservativeRecipientDetection;
- (id)defaultTimeIntervalForAWarning;
- (id)defaultTimeIntervalToStartWarningExposition;
- (id)dictionaryFromPathWithPrefix:(id)arg1 suffix:(id)arg2;
- (id)followUpOnIncomingMailsDetectionRegexes;
- (id)followUpOnOutgoingMailsAsksDetectionRegexes;
- (id)followUpOnOutgoingMailsQuestionsDetectionRegexes;
- (id)followUpWarningsParameters;
- (id)init;
- (id)isDNUOnlyEnablement;
- (id)isEnabled;
- (void)loadFactors;
- (id)loadLevelAsBooleanFromFactor:(id)arg1;
- (id)loadLevelAsLongFromFactor:(id)arg1;
- (id)loadLevelAsModelPath:(id)arg1;
- (id)loadLevelAsNumericArrayFromFactor:(id)arg1;
- (id)loadLevelAsNumericDictionaryFromFactor:(id)arg1;
- (id)loadLevelAsNumericFromFactor:(id)arg1;
- (id)loadLevelAsStringArrayFromFactor:(id)arg1;
- (id)loadLevelAsStringFromFactor:(id)arg1;
- (id)minCountToConsiderATokenAsExtremelyDiscriminant;
- (id)minCountToConsiderATokenAsHighlyDiscriminant;
- (id)modelFeatureNames;
- (id)modelFeatureStandardizationMeans;
- (id)modelFeatureStandardizationStandardDeviations;
- (id)modelGroundTruthFeatureLowerBounds;
- (id)modelGroundTruthFeatureNames;
- (id)modelGroundTruthFeatureUpperBounds;
- (id)modelGroundTruthOutputs;
- (id)modelGroundTruthVersion;
- (id)modelInferenceVersion;
- (id)modelPath;
- (id)nicknameDetectionRegexes;
- (id)ratioToConsiderATokenAsExtremelyDiscriminant;
- (id)ratioToConsiderATokenAsHighlyDiscriminant;
- (id)recipientConservativeDetectionRegexes;
- (id)recipientDetectionRegexes;
- (void)refresh;
- (id)saliencyOverrideFeatureLowerBounds;
- (id)saliencyOverrideFeatureNames;
- (id)saliencyOverrideFeatureUpperBounds;
- (id)saliencyOverrideOutputs;
- (void)setTriClient:(id)arg1;
- (id)signatureStatsLogging;
- (id)triClient;
- (id)trialMetadata;
- (id)trialMetadataString;

@end
