
@interface ORCHSchemaORCHResourceUtilizationMetadata : SISchemaInstrumentationMessage {
    bool  _hasMemoryUsageMetadata;
    ORCHSchemaORCHMemoryUsageMetadata * _memoryUsageMetadata;
}

@property (nonatomic) bool hasMemoryUsageMetadata;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) ORCHSchemaORCHMemoryUsageMetadata *memoryUsageMetadata;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteMemoryUsageMetadata;
- (id)dictionaryRepresentation;
- (bool)hasMemoryUsageMetadata;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)memoryUsageMetadata;
- (bool)readFrom:(id)arg1;
- (void)setHasMemoryUsageMetadata:(bool)arg1;
- (void)setMemoryUsageMetadata:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
