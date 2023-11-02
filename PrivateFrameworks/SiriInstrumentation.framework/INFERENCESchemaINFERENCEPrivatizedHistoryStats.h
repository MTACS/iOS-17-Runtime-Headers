
@interface INFERENCESchemaINFERENCEPrivatizedHistoryStats : SISchemaInstrumentationMessage {
    NSArray * _frequencies;
    struct { 
        unsigned int recency : 1; 
    }  _has;
    unsigned int  _recency;
}

@property (nonatomic, copy) NSArray *frequencies;
@property (nonatomic) bool hasRecency;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int recency;

- (void).cxx_destruct;
- (void)addFrequencies:(unsigned int)arg1;
- (void)clearFrequencies;
- (void)deleteFrequencies;
- (void)deleteRecency;
- (id)dictionaryRepresentation;
- (id)frequencies;
- (unsigned int)frequenciesAtIndex:(unsigned long long)arg1;
- (unsigned long long)frequenciesCount;
- (bool)hasRecency;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (unsigned int)recency;
- (void)setFrequencies:(id)arg1;
- (void)setHasRecency:(bool)arg1;
- (void)setRecency:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
