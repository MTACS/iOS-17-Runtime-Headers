
@interface EXPSiriSchemaEXPClientExperimentTriggeredTier1 : SISchemaInstrumentationMessage {
    NSArray * _allocations;
    SISchemaUUID * _codepathId;
    bool  _hasCodepathId;
}

@property (nonatomic, copy) NSArray *allocations;
@property (nonatomic, retain) SISchemaUUID *codepathId;
@property (nonatomic) bool hasCodepathId;
@property (nonatomic, readonly) NSData *jsonData;

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
- (id)dictionaryRepresentation;
- (bool)hasCodepathId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAllocations:(id)arg1;
- (void)setCodepathId:(id)arg1;
- (void)setHasCodepathId:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
