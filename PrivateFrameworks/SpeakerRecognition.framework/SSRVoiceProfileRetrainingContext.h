
@interface SSRVoiceProfileRetrainingContext : NSObject {
    CSAsset * _asset;
    float  _combinationWeight;
    NSArray * _compareVoiceProfileArray;
    NSString * _configVersion;
    bool  _filterToVoiceTriggerUtterances;
    bool  _forceRetrain;
    SSRLoggingAggregator * _logAggregator;
    unsigned long long  _maxAllowedSpeakerVectors;
    NSDictionary * _modelsContext;
    NSURL * _resourceFilePath;
    NSString * _sessionId;
    unsigned long long  _spIdType;
    SSRVoiceProfile * _voiceProfile;
}

@property (nonatomic, retain) CSAsset *asset;
@property (nonatomic, readonly) float combinationWeight;
@property (nonatomic, retain) NSArray *compareVoiceProfileArray;
@property (nonatomic, readonly) NSString *configVersion;
@property (nonatomic, readonly) bool filterToVoiceTriggerUtterances;
@property (nonatomic, readonly) bool forceRetrain;
@property (nonatomic, retain) SSRLoggingAggregator *logAggregator;
@property (nonatomic, readonly) unsigned long long maxAllowedSpeakerVectors;
@property (nonatomic, readonly) NSDictionary *modelsContext;
@property (nonatomic, readonly) NSURL *resourceFilePath;
@property (nonatomic, readonly) NSString *sessionId;
@property (nonatomic, readonly) unsigned long long spIdType;
@property (nonatomic, retain) SSRVoiceProfile *voiceProfile;

- (void).cxx_destruct;
- (id)asset;
- (float)combinationWeight;
- (id)compareVoiceProfileArray;
- (id)configVersion;
- (id)description;
- (bool)filterToVoiceTriggerUtterances;
- (bool)forceRetrain;
- (id)initWithVoiceRetrainingContext:(id)arg1 error:(id*)arg2;
- (id)logAggregator;
- (unsigned long long)maxAllowedSpeakerVectors;
- (id)modelsContext;
- (id)resourceFilePath;
- (id)sessionId;
- (void)setAsset:(id)arg1;
- (void)setCompareVoiceProfileArray:(id)arg1;
- (void)setLogAggregator:(id)arg1;
- (void)setVoiceProfile:(id)arg1;
- (unsigned long long)spIdType;
- (id)voiceProfile;

@end
