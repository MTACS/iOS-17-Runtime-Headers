
@interface EXPSiriSchemaEXPAllocationSnapshot : SISchemaInstrumentationMessage {
    NSArray * _allocations;
}

@property (nonatomic, copy) NSArray *allocations;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addAllocations:(id)arg1;
- (id)allocations;
- (id)allocationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)allocationsCount;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearAllocations;
- (void)deleteAllocations;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAllocations:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
