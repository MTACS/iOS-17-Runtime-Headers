
@interface LoggingHelper : NSObject {
    NSString * _datapackVersion;
    NSUUID * _dodmlId;
    NSString * _experimentName;
    long long  _trialDeploymentId;
    NSString * _trialExperimentId;
    NSUUID * _trialTreatmentId;
}

@property (nonatomic, retain) NSString *datapackVersion;

- (void).cxx_destruct;
- (id)_alignmentInfosFromAlignmentDict:(id)arg1;
- (id)_audioFileResultsFromResultDict:(id)arg1 privateAudioFileResultsOut:(id*)arg2;
- (id)_choiceInfosFromChoiceInfoDicts:(id)arg1 privateTokens:(id)arg2;
- (id)_decodingMetricsFromMetricsDict:(id)arg1;
- (id)_decodingResultsWithAudioDict:(id)arg1 privateTokensOut:(id*)arg2;
- (id)_lmMetricsFromEvalDict:(id)arg1 perplexityName:(id)arg2 timesDict:(id)arg3;
- (id)_plmMetricsFromPlmDict:(id)arg1;
- (id)_resultInfosFromResultInfoDict:(id)arg1 privateTokens:(id)arg2;
- (id)_tokensFromTokenDict:(id)arg1 privateTokens:(id)arg2;
- (id)_tokensFromTokensArray:(id)arg1 privateTokens:(id)arg2;
- (id)_transcriptMetadataFromPopDict:(id)arg1;
- (id)_utteranceInfosFromUtteranceInfoDict:(id)arg1 privateTokens:(id)arg2;
- (void)_wrapAndEmitTopLevelEvent:(id)arg1;
- (id)datapackVersion;
- (id)initWithExperimentName:(id)arg1;
- (id)initWithExperimentName:(id)arg1 trialExperimentId:(id)arg2 trialTreatmentId:(id)arg3 trialDeploymentId:(long long)arg4;
- (void)logDictationPersonalizationExperimentEndedAndTier1WithResultsDict:(id)arg1;
- (void)logDictationPersonalizationExperimentStartedOrChanged;
- (void)logUserEditExperimentEndedAndTier1WithResultsDict:(id)arg1;
- (void)logUserEditExperimentStartedOrChanged;
- (void)setDatapackVersion:(id)arg1;

@end
