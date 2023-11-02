
@interface VTAnalyzerNDAPI : NSObject {
    NSDictionary * _decodedInfo;
    void * _novDetect;
}

- (void).cxx_destruct;
- (id)_decodeJson:(id)arg1;
- (bool)_getBooleanValueFromConfigurationName:(id)arg1 defaultTo:(bool)arg2;
- (double)_getFloatValueFromConfigurationName:(id)arg1 defaultTo:(double)arg2;
- (int)_getIntValueFromConfigurationName:(id)arg1 defaultTo:(int)arg2;
- (id)_getNumberForKey:(id)arg1 category:(id)arg2 default:(id)arg3;
- (const char *)_getOptionValueFromConfigurationName:(id)arg1;
- (id)_getStringValueFromConfigurationName:(id)arg1 defaultTo:(id)arg2;
- (const struct _ndsvscore { float x1; }*)analyzeSAT:(const float*)arg1 size:(unsigned int)arg2;
- (void)analyzeWavData:(const short*)arg1 length:(int)arg2;
- (void)dealloc;
- (void)deleteVectorIndex:(int)arg1;
- (const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; bool x6; bool x7; }*)getAnalyzedResult;
- (const struct _ndresult { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; bool x6; bool x7; }*)getAnalyzedResult:(unsigned int)arg1;
- (double)getCombinedLoggingThreshold;
- (double)getCombinedSecondChanceThreshold;
- (double)getCombinedTriggerThreshold;
- (bool)getDoSAT;
- (bool)getDoSupervectorSecondaryTest;
- (double)getExtraSamplesAtStart;
- (int)getMaximumSpeakerVectors;
- (double)getNDAPILoggingThreshold;
- (double)getNDAPISecondChanceThreshold;
- (double)getNDAPITriggerThreshold;
- (int)getPayloadUtteranceLifeTimeInDays;
- (id)getRecognizerConfig;
- (double)getRecognizerScoreScaleFactor;
- (double)getRecognizerThresholdOffset;
- (double)getRecognizerWaitTime;
- (double)getRetrainExplicitUttThresholdSAT;
- (double)getRetrainExplicitUttThresholdTDSR;
- (int)getRetrainNumExplicitUtt;
- (int)getRetrainNumImplicitUtt;
- (id)getRetrainSamplingPolicy;
- (double)getRetrainThresholdSAT;
- (double)getRetrainThresholdTDSR;
- (double)getRetrainThresholdTrigger;
- (int)getSATVectorCount;
- (const struct _ndsvscore { float x1; }*)getScoreSuperVector:(const float*)arg1 size:(unsigned int)arg2;
- (double)getSecondPassTrailingTime;
- (const struct _ndsupervec { float *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)getSuperVectorWithEndPoint:(unsigned int)arg1;
- (double)getThresholdPresuperVector;
- (double)getThresholdSAT;
- (id)getTriggerTokens;
- (bool)getUseFallbackThresholdUponTimeout;
- (bool)getUseKeywordSpotting;
- (bool)getUseRecognizer;
- (id)getVoiceProfilePruningCookie;
- (int)getVoiceProfilePruningNumRetentionUtterances;
- (id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2;
- (bool)initializeSAT:(id)arg1;
- (void)reset;
- (void)resetBest;
- (void)updateSAT;

@end
