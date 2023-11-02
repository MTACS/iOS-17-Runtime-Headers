
@interface PLUSSchemaPLUSMediaCandidateEntity : SISchemaInstrumentationMessage {
    double  _confidence;
    NSString * _entityAdamId;
    NSArray * _entityFeedbackHistorys;
    struct { 
        unsigned int nominated : 1; 
        unsigned int confidence : 1; 
    }  _has;
    bool  _hasEntityAdamId;
    bool  _nominated;
}

@property (nonatomic) double confidence;
@property (nonatomic, copy) NSString *entityAdamId;
@property (nonatomic, copy) NSArray *entityFeedbackHistorys;
@property (nonatomic) bool hasConfidence;
@property (nonatomic) bool hasEntityAdamId;
@property (nonatomic) bool hasNominated;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool nominated;

- (void).cxx_destruct;
- (void)addEntityFeedbackHistory:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearEntityFeedbackHistory;
- (double)confidence;
- (void)deleteConfidence;
- (void)deleteEntityAdamId;
- (void)deleteEntityFeedbackHistory;
- (void)deleteNominated;
- (id)dictionaryRepresentation;
- (id)entityAdamId;
- (id)entityFeedbackHistoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)entityFeedbackHistoryCount;
- (id)entityFeedbackHistorys;
- (bool)hasConfidence;
- (bool)hasEntityAdamId;
- (bool)hasNominated;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)nominated;
- (bool)readFrom:(id)arg1;
- (void)setConfidence:(double)arg1;
- (void)setEntityAdamId:(id)arg1;
- (void)setEntityFeedbackHistorys:(id)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasEntityAdamId:(bool)arg1;
- (void)setHasNominated:(bool)arg1;
- (void)setNominated:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
