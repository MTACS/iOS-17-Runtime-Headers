
@interface EXPSiriSchemaEXPServerExperimentTriggeredTier1 : SISchemaInstrumentationMessage {
    NSArray * _allocations;
    SISchemaUUID * _codepathId;
    bool  _hasCodepathId;
    bool  _hasPegasusId;
    SISchemaUUID * _pegasusId;
}

@property (nonatomic, copy) NSArray *allocations;
@property (nonatomic, retain) SISchemaUUID *codepathId;
@property (nonatomic) bool hasCodepathId;
@property (nonatomic) bool hasPegasusId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *pegasusId;

- (void).cxx_destruct;
- (void)addAllocation:(id)arg1;
- (id)allocationAtIndex:(unsigned long long)arg1;
- (unsigned long long)allocationCount;
- (id)allocations;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearAllocation;
- (id)codepathId;
- (void)deleteAllocation;
- (void)deleteCodepathId;
- (void)deletePegasusId;
- (id)dictionaryRepresentation;
- (bool)hasCodepathId;
- (bool)hasPegasusId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)pegasusId;
- (bool)readFrom:(id)arg1;
- (void)setAllocations:(id)arg1;
- (void)setCodepathId:(id)arg1;
- (void)setHasCodepathId:(bool)arg1;
- (void)setHasPegasusId:(bool)arg1;
- (void)setPegasusId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
