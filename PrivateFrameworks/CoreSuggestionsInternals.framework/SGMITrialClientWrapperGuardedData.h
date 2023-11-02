
@interface SGMITrialClientWrapperGuardedData : NSObject {
    NSDictionary * _attachmentDetectionRegexes;
    NSArray * _attachmentLinkDetection;
    NSNumber * _bodyAnalysisSamplingFactor;
    NSNumber * _classificationOfflinePrecision;
    NSNumber * _classificationOfflineRecall;
    NSNumber * _classificationThreshold;
    NSNumber * _conservativeRecipientDetection;
    NSNumber * _defaultTimeIntervalForAWarning;
    NSNumber * _defaultTimeIntervalToStartWarningExposition;
    NSDictionary * _followUpOnIncomingMailsDetectionRegexes;
    NSDictionary * _followUpOnOutgoingMailsAsksDetectionRegexes;
    NSDictionary * _followUpOnOutgoingMailsQuestionsDetectionRegexes;
    NSDictionary * _followUpWarningsParameters;
    NSNumber * _isDNUOnlyEnablement;
    NSNumber * _isEnabled;
    NSNumber * _minCountToConsiderATokenAsExtremelyDiscriminant;
    NSNumber * _minCountToConsiderATokenAsHighlyDiscriminant;
    NSArray * _modelFeatureNames;
    NSArray * _modelFeatureStandardizationMeans;
    NSArray * _modelFeatureStandardizationStandardDeviations;
    NSArray * _modelGroundTruthFeatureLowerBounds;
    NSArray * _modelGroundTruthFeatureNames;
    NSArray * _modelGroundTruthFeatureUpperBounds;
    NSArray * _modelGroundTruthOutputs;
    NSString * _modelGroundTruthVersion;
    NSString * _modelInferenceVersion;
    NSString * _modelPath;
    NSDictionary * _nicknameDetectionRegexes;
    NSNumber * _ratioToConsiderATokenAsExtremelyDiscriminant;
    NSNumber * _ratioToConsiderATokenAsHighlyDiscriminant;
    NSDictionary * _recipientConservativeDetectionRegexes;
    NSDictionary * _recipientDetectionRegexes;
    NSArray * _saliencyOverrideFeatureLowerBounds;
    NSArray * _saliencyOverrideFeatureNames;
    NSArray * _saliencyOverrideFeatureUpperBounds;
    NSArray * _saliencyOverrideOutputs;
    NSNumber * _signatureStatsLogging;
}

- (void).cxx_destruct;

@end
