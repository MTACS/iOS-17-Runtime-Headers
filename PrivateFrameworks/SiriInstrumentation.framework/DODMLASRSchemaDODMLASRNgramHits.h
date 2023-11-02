
@interface DODMLASRSchemaDODMLASRNgramHits : SISchemaInstrumentationMessage {
    NSArray * _hits;
}

@property (nonatomic, copy) NSArray *hits;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addHits:(unsigned int)arg1;
- (void)clearHits;
- (void)deleteHits;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)hits;
- (unsigned int)hitsAtIndex:(unsigned long long)arg1;
- (unsigned long long)hitsCount;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHits:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
