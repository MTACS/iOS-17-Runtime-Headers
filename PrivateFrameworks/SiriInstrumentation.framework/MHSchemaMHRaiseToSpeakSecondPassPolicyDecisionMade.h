
@interface MHSchemaMHRaiseToSpeakSecondPassPolicyDecisionMade : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isSecondPassTriggered : 1; 
        unsigned int speakingProbability : 1; 
        unsigned int processedAudioDurationInMs : 1; 
        unsigned int isReplayModeEnabled : 1; 
    }  _has;
    bool  _isReplayModeEnabled;
    bool  _isSecondPassTriggered;
    double  _processedAudioDurationInMs;
    double  _speakingProbability;
}

@property (nonatomic) bool hasIsReplayModeEnabled;
@property (nonatomic) bool hasIsSecondPassTriggered;
@property (nonatomic) bool hasProcessedAudioDurationInMs;
@property (nonatomic) bool hasSpeakingProbability;
@property (nonatomic) bool isReplayModeEnabled;
@property (nonatomic) bool isSecondPassTriggered;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double processedAudioDurationInMs;
@property (nonatomic) double speakingProbability;

- (void)deleteIsReplayModeEnabled;
- (void)deleteIsSecondPassTriggered;
- (void)deleteProcessedAudioDurationInMs;
- (void)deleteSpeakingProbability;
- (id)dictionaryRepresentation;
- (bool)hasIsReplayModeEnabled;
- (bool)hasIsSecondPassTriggered;
- (bool)hasProcessedAudioDurationInMs;
- (bool)hasSpeakingProbability;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isReplayModeEnabled;
- (bool)isSecondPassTriggered;
- (id)jsonData;
- (double)processedAudioDurationInMs;
- (bool)readFrom:(id)arg1;
- (void)setHasIsReplayModeEnabled:(bool)arg1;
- (void)setHasIsSecondPassTriggered:(bool)arg1;
- (void)setHasProcessedAudioDurationInMs:(bool)arg1;
- (void)setHasSpeakingProbability:(bool)arg1;
- (void)setIsReplayModeEnabled:(bool)arg1;
- (void)setIsSecondPassTriggered:(bool)arg1;
- (void)setProcessedAudioDurationInMs:(double)arg1;
- (void)setSpeakingProbability:(double)arg1;
- (double)speakingProbability;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
