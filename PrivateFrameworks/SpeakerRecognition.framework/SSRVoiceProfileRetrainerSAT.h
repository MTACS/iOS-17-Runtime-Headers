
@interface SSRVoiceProfileRetrainerSAT : NSObject <SSRVoiceProfileRetrainer> {
    float  _bestTriggerScore;
    NSDictionary * _comparativeModels;
    NSURL * _configFilePath;
    unsigned long long  _maximumSpeakerVectors;
    unsigned long long  _processedAudioDurationMs;
    NSObject<OS_dispatch_queue> * _queue;
    NSURL * _resourceFilePath;
    NSURL * _satModelFilePath;
    SSRSpeakerRecognitionScorer * _satScorer;
    unsigned long long  _spIdType;
    NSData * _superVector;
    unsigned long long  _superVectorSize;
    SSRVoiceProfile * _voiceProfile;
}

@property (nonatomic, retain) NSDictionary *comparativeModels;
@property (nonatomic, retain) NSURL *configFilePath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool implicitTrainingRequired;
@property (nonatomic, readonly) NSURL *modelFilePath;
@property (nonatomic) unsigned long long processedAudioDurationMs;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSURL *resourceFilePath;
@property (nonatomic, readonly) unsigned long long retrainerType;
@property (nonatomic, retain) NSURL *satModelFilePath;
@property (nonatomic, retain) SSRSpeakerRecognitionScorer *satScorer;
@property (nonatomic) unsigned long long spIdType;
@property (nonatomic, retain) NSData *superVector;
@property (nonatomic) unsigned long long superVectorSize;
@property (readonly) Class superclass;
@property (nonatomic, retain) SSRVoiceProfile *voiceProfile;

- (void).cxx_destruct;
- (id)_processAudioFile:(id)arg1 withSATProcessor:(id)arg2;
- (id)_processSuperVector:(id)arg1 withSize:(unsigned long long)arg2 withScorers:(id)arg3 processedAudioDurationMs:(unsigned long long)arg4;
- (void)addUtterances:(id)arg1 withPolicy:(id /* block */)arg2 withCompletion:(id /* block */)arg3;
- (id)comparativeModels;
- (id)configFilePath;
- (id)description;
- (bool)implicitTrainingRequired;
- (id)initWithVoiceRetrainingContext:(id)arg1;
- (id)modelFilePath;
- (bool)needsRetrainingWithAudioFiles:(id)arg1;
- (unsigned long long)processedAudioDurationMs;
- (id)purgeConfusionInformationWithPolicy:(id /* block */)arg1;
- (void)purgeLastSpeakerEmbedding;
- (id)queue;
- (bool)resetModelForRetraining;
- (id)resourceFilePath;
- (unsigned long long)retrainerType;
- (id)satModelFilePath;
- (id)satScorer;
- (void)setComparativeModels:(id)arg1;
- (void)setConfigFilePath:(id)arg1;
- (void)setProcessedAudioDurationMs:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setResourceFilePath:(id)arg1;
- (void)setSatModelFilePath:(id)arg1;
- (void)setSatScorer:(id)arg1;
- (void)setSpIdType:(unsigned long long)arg1;
- (void)setSuperVector:(id)arg1;
- (void)setSuperVectorSize:(unsigned long long)arg1;
- (void)setVoiceProfile:(id)arg1;
- (unsigned long long)spIdType;
- (id)superVector;
- (unsigned long long)superVectorSize;
- (id)voiceProfile;

@end
