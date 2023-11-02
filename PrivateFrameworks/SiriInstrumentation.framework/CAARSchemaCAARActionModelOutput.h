
@interface CAARSchemaCAARActionModelOutput : SISchemaInstrumentationMessage {
    SISchemaUUID * _actionCandidateId;
    struct { 
        unsigned int modelScore : 1; 
    }  _has;
    bool  _hasActionCandidateId;
    float  _modelScore;
}

@property (nonatomic, retain) SISchemaUUID *actionCandidateId;
@property (nonatomic) bool hasActionCandidateId;
@property (nonatomic) bool hasModelScore;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float modelScore;

- (void).cxx_destruct;
- (id)actionCandidateId;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteActionCandidateId;
- (void)deleteModelScore;
- (id)dictionaryRepresentation;
- (bool)hasActionCandidateId;
- (bool)hasModelScore;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (float)modelScore;
- (bool)readFrom:(id)arg1;
- (void)setActionCandidateId:(id)arg1;
- (void)setHasActionCandidateId:(bool)arg1;
- (void)setHasModelScore:(bool)arg1;
- (void)setModelScore:(float)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
