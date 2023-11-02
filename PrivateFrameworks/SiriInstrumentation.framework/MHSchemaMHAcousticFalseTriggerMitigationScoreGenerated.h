
@interface MHSchemaMHAcousticFalseTriggerMitigationScoreGenerated : SISchemaInstrumentationMessage {
    unsigned long long  _audioDurationInNs;
    struct { 
        unsigned int score : 1; 
        unsigned int audioDurationInNs : 1; 
        unsigned int threshold : 1; 
    }  _has;
    float  _score;
    float  _threshold;
}

@property (nonatomic) unsigned long long audioDurationInNs;
@property (nonatomic) bool hasAudioDurationInNs;
@property (nonatomic) bool hasScore;
@property (nonatomic) bool hasThreshold;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float score;
@property (nonatomic) float threshold;

- (unsigned long long)audioDurationInNs;
- (void)deleteAudioDurationInNs;
- (void)deleteScore;
- (void)deleteThreshold;
- (id)dictionaryRepresentation;
- (bool)hasAudioDurationInNs;
- (bool)hasScore;
- (bool)hasThreshold;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (float)score;
- (void)setAudioDurationInNs:(unsigned long long)arg1;
- (void)setHasAudioDurationInNs:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setHasThreshold:(bool)arg1;
- (void)setScore:(float)arg1;
- (void)setThreshold:(float)arg1;
- (id)suppressMessageUnderConditions;
- (float)threshold;
- (void)writeTo:(id)arg1;

@end
