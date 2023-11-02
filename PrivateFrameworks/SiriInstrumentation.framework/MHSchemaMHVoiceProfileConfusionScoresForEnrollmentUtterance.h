
@interface MHSchemaMHVoiceProfileConfusionScoresForEnrollmentUtterance : SISchemaInstrumentationMessage {
    unsigned int  _enrollmentUtteranceNumber;
    struct { 
        unsigned int enrollmentUtteranceNumber : 1; 
    }  _has;
    NSArray * _voiceProfileConfusionScores;
}

@property (nonatomic) unsigned int enrollmentUtteranceNumber;
@property (nonatomic) bool hasEnrollmentUtteranceNumber;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *voiceProfileConfusionScores;

- (void).cxx_destruct;
- (void)addVoiceProfileConfusionScores:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearVoiceProfileConfusionScores;
- (void)deleteEnrollmentUtteranceNumber;
- (void)deleteVoiceProfileConfusionScores;
- (id)dictionaryRepresentation;
- (unsigned int)enrollmentUtteranceNumber;
- (bool)hasEnrollmentUtteranceNumber;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEnrollmentUtteranceNumber:(unsigned int)arg1;
- (void)setHasEnrollmentUtteranceNumber:(bool)arg1;
- (void)setVoiceProfileConfusionScores:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)voiceProfileConfusionScores;
- (id)voiceProfileConfusionScoresAtIndex:(unsigned long long)arg1;
- (unsigned long long)voiceProfileConfusionScoresCount;
- (void)writeTo:(id)arg1;

@end
