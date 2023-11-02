
@interface SISchemaUserSpeechDuration : SISchemaInstrumentationMessage {
    long long  _durationMs;
    struct { 
        unsigned int durationMs : 1; 
    }  _has;
    bool  _hasResultCandidateId;
    NSString * _resultCandidateId;
}

@property (nonatomic) long long durationMs;
@property (nonatomic) bool hasDurationMs;
@property (nonatomic) bool hasResultCandidateId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *resultCandidateId;

- (void).cxx_destruct;
- (void)deleteDurationMs;
- (void)deleteResultCandidateId;
- (id)dictionaryRepresentation;
- (long long)durationMs;
- (bool)hasDurationMs;
- (bool)hasResultCandidateId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)resultCandidateId;
- (void)setDurationMs:(long long)arg1;
- (void)setHasDurationMs:(bool)arg1;
- (void)setHasResultCandidateId:(bool)arg1;
- (void)setResultCandidateId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
