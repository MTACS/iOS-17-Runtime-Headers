
@interface MHSchemaMHSpeakerFalseTriggerMitigated : SISchemaInstrumentationMessage {
    unsigned int  _errorCode;
    NSString * _errorMessage;
    struct { 
        unsigned int speakerMatchScore : 1; 
        unsigned int thresholdScore : 1; 
        unsigned int processedAudioDurationInNs : 1; 
        unsigned int errorCode : 1; 
    }  _has;
    bool  _hasErrorMessage;
    bool  _hasModelVersion;
    NSString * _modelVersion;
    double  _processedAudioDurationInNs;
    float  _speakerMatchScore;
    float  _thresholdScore;
}

@property (nonatomic) unsigned int errorCode;
@property (nonatomic, copy) NSString *errorMessage;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasErrorMessage;
@property (nonatomic) bool hasModelVersion;
@property (nonatomic) bool hasProcessedAudioDurationInNs;
@property (nonatomic) bool hasSpeakerMatchScore;
@property (nonatomic) bool hasThresholdScore;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *modelVersion;
@property (nonatomic) double processedAudioDurationInNs;
@property (nonatomic) float speakerMatchScore;
@property (nonatomic) float thresholdScore;

- (void).cxx_destruct;
- (void)deleteErrorCode;
- (void)deleteErrorMessage;
- (void)deleteModelVersion;
- (void)deleteProcessedAudioDurationInNs;
- (void)deleteSpeakerMatchScore;
- (void)deleteThresholdScore;
- (id)dictionaryRepresentation;
- (unsigned int)errorCode;
- (id)errorMessage;
- (bool)hasErrorCode;
- (bool)hasErrorMessage;
- (bool)hasModelVersion;
- (bool)hasProcessedAudioDurationInNs;
- (bool)hasSpeakerMatchScore;
- (bool)hasThresholdScore;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)modelVersion;
- (double)processedAudioDurationInNs;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasErrorMessage:(bool)arg1;
- (void)setHasModelVersion:(bool)arg1;
- (void)setHasProcessedAudioDurationInNs:(bool)arg1;
- (void)setHasSpeakerMatchScore:(bool)arg1;
- (void)setHasThresholdScore:(bool)arg1;
- (void)setModelVersion:(id)arg1;
- (void)setProcessedAudioDurationInNs:(double)arg1;
- (void)setSpeakerMatchScore:(float)arg1;
- (void)setThresholdScore:(float)arg1;
- (float)speakerMatchScore;
- (id)suppressMessageUnderConditions;
- (float)thresholdScore;
- (void)writeTo:(id)arg1;

@end
