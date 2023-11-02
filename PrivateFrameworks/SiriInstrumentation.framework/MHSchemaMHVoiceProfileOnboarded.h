
@interface MHSchemaMHVoiceProfileOnboarded : SISchemaInstrumentationMessage {
    NSArray * _confusionScoresForEnrollmentUtterances;
    struct { 
        unsigned int voiceProfilePitchInHz : 1; 
    }  _has;
    unsigned int  _voiceProfilePitchInHz;
}

@property (nonatomic, copy) NSArray *confusionScoresForEnrollmentUtterances;
@property (nonatomic) bool hasVoiceProfilePitchInHz;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int voiceProfilePitchInHz;

- (void).cxx_destruct;
- (void)addConfusionScoresForEnrollmentUtterance:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearConfusionScoresForEnrollmentUtterance;
- (id)confusionScoresForEnrollmentUtteranceAtIndex:(unsigned long long)arg1;
- (unsigned long long)confusionScoresForEnrollmentUtteranceCount;
- (id)confusionScoresForEnrollmentUtterances;
- (void)deleteConfusionScoresForEnrollmentUtterance;
- (void)deleteVoiceProfilePitchInHz;
- (id)dictionaryRepresentation;
- (bool)hasVoiceProfilePitchInHz;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setConfusionScoresForEnrollmentUtterances:(id)arg1;
- (void)setHasVoiceProfilePitchInHz:(bool)arg1;
- (void)setVoiceProfilePitchInHz:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned int)voiceProfilePitchInHz;
- (void)writeTo:(id)arg1;

@end
