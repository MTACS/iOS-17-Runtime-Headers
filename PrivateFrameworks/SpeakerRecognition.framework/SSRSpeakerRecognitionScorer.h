
@interface SSRSpeakerRecognitionScorer : NSObject {
    NSURL * _configFilePath;
    NSURL * _modelFilePath;
    void * _novDetect;
    unsigned long long  _offsetsType;
    NSString * _profileID;
    NSURL * _resourceFilePath;
    bool  _satModelAvailable;
}

@property (nonatomic, retain) NSURL *configFilePath;
@property (nonatomic, retain) NSURL *modelFilePath;
@property (nonatomic, readonly) NSString *profileID;
@property (nonatomic, readonly) NSString *psrConfigFilePath;
@property (nonatomic, readonly) NSString *psrConfigRoot;
@property (nonatomic, retain) NSURL *resourceFilePath;
@property (nonatomic, readonly) bool satModelAvailable;
@property (nonatomic, readonly) NSString *sysConfigRoot;

+ (id)createVoiceScorersWithVoiceProfiles:(id)arg1 withConfigFile:(id)arg2 withResourceFile:(id)arg3 withOffsetsType:(unsigned long long)arg4;

- (void).cxx_destruct;
- (double)_getFloatValueForNDAPIConfigOption:(id)arg1 defaultValue:(double)arg2;
- (double)_getFloatValueFromConfigurationName:(id)arg1 defaultTo:(double)arg2;
- (int)_getIntValueFromConfigurationName:(id)arg1 defaultTo:(int)arg2;
- (id)_getOptionValueFromConfigurationName:(id)arg1;
- (id)_getStringValueFromConfigurationName:(id)arg1 defaultTo:(id)arg2;
- (id)_getValueForNDAPIConfigOption:(id)arg1;
- (float)_satLogitCeilScore;
- (float)_satLogitFloorScore;
- (float)_satScoreNonVTOffset;
- (float)_satScoreNonVTScale;
- (float)_satScoreVTOffset;
- (float)_satScoreVTScale;
- (float)analyzeSpeakerVector:(id)arg1 withDimensions:(unsigned long long)arg2 withThresholdType:(unsigned long long)arg3;
- (float)analyzeSuperVector:(id)arg1 withDimensions:(unsigned long long)arg2 withThresholdType:(unsigned long long)arg3;
- (id)configFilePath;
- (void)dealloc;
- (void)deleteVectorAtIndex:(int)arg1;
- (unsigned long long)getSATVectorCount;
- (id)getSpeakerVectorAtIndex:(unsigned long long)arg1;
- (id)initWithProfileID:(id)arg1 withModelFile:(id)arg2 withConfigFile:(id)arg3 withResourceFile:(id)arg4 withOffsetsType:(unsigned long long)arg5;
- (id)modelFilePath;
- (float)normalizedScoreFromRawScore:(float)arg1 forScoreType:(unsigned long long)arg2;
- (id)profileID;
- (id)psrConfigFilePath;
- (id)psrConfigRoot;
- (void)resetForNewRequest;
- (bool)resetScorerWithModelFilePath:(id)arg1;
- (id)resourceFilePath;
- (bool)satModelAvailable;
- (float)scoreSpeakerVector:(id)arg1 withDimensions:(unsigned long long)arg2 withThresholdType:(unsigned long long)arg3;
- (void)setConfigFilePath:(id)arg1;
- (void)setModelFilePath:(id)arg1;
- (void)setResourceFilePath:(id)arg1;
- (id)sysConfigRoot;
- (void)updateSAT;

@end
