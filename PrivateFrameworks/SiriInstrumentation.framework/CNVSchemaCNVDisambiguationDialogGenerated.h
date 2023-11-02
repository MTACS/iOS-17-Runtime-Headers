
@interface CNVSchemaCNVDisambiguationDialogGenerated : SISchemaInstrumentationMessage {
    NSArray * _actionCandidateIds;
    NSString * _dialogType;
    bool  _hasDialogType;
}

@property (nonatomic, copy) NSArray *actionCandidateIds;
@property (nonatomic, copy) NSString *dialogType;
@property (nonatomic) bool hasDialogType;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)actionCandidateIds;
- (id)actionCandidateIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)actionCandidateIdsCount;
- (void)addActionCandidateIds:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearActionCandidateIds;
- (void)deleteActionCandidateIds;
- (void)deleteDialogType;
- (id)dialogType;
- (id)dictionaryRepresentation;
- (bool)hasDialogType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setActionCandidateIds:(id)arg1;
- (void)setDialogType:(id)arg1;
- (void)setHasDialogType:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
