
@interface CLPInstSchemaCLPCDMReplaySampleStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int utteranceRepetitionsInCalendarWeek : 1; 
        unsigned int wasHabitualUserDuringCalendarWeek : 1; 
    }  _has;
    bool  _hasOriginalRequestId;
    bool  _hasResultCandidateId;
    bool  _hasTrpId;
    SISchemaUUID * _originalRequestId;
    NSString * _resultCandidateId;
    SISchemaUUID * _trpId;
    unsigned int  _utteranceRepetitionsInCalendarWeek;
    bool  _wasHabitualUserDuringCalendarWeek;
}

@property (nonatomic) bool hasOriginalRequestId;
@property (nonatomic) bool hasResultCandidateId;
@property (nonatomic) bool hasTrpId;
@property (nonatomic) bool hasUtteranceRepetitionsInCalendarWeek;
@property (nonatomic) bool hasWasHabitualUserDuringCalendarWeek;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *originalRequestId;
@property (nonatomic, copy) NSString *resultCandidateId;
@property (nonatomic, retain) SISchemaUUID *trpId;
@property (nonatomic) unsigned int utteranceRepetitionsInCalendarWeek;
@property (nonatomic) bool wasHabitualUserDuringCalendarWeek;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteOriginalRequestId;
- (void)deleteResultCandidateId;
- (void)deleteTrpId;
- (void)deleteUtteranceRepetitionsInCalendarWeek;
- (void)deleteWasHabitualUserDuringCalendarWeek;
- (id)dictionaryRepresentation;
- (bool)hasOriginalRequestId;
- (bool)hasResultCandidateId;
- (bool)hasTrpId;
- (bool)hasUtteranceRepetitionsInCalendarWeek;
- (bool)hasWasHabitualUserDuringCalendarWeek;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)originalRequestId;
- (bool)readFrom:(id)arg1;
- (id)resultCandidateId;
- (void)setHasOriginalRequestId:(bool)arg1;
- (void)setHasResultCandidateId:(bool)arg1;
- (void)setHasTrpId:(bool)arg1;
- (void)setHasUtteranceRepetitionsInCalendarWeek:(bool)arg1;
- (void)setHasWasHabitualUserDuringCalendarWeek:(bool)arg1;
- (void)setOriginalRequestId:(id)arg1;
- (void)setResultCandidateId:(id)arg1;
- (void)setTrpId:(id)arg1;
- (void)setUtteranceRepetitionsInCalendarWeek:(unsigned int)arg1;
- (void)setWasHabitualUserDuringCalendarWeek:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (id)trpId;
- (unsigned int)utteranceRepetitionsInCalendarWeek;
- (bool)wasHabitualUserDuringCalendarWeek;
- (void)writeTo:(id)arg1;

@end
