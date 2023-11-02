
@interface ORCHSchemaORCHMemoryUsageMetadata : SISchemaInstrumentationMessage {
    struct { 
        unsigned int maxRSS : 1; 
    }  _has;
    unsigned long long  _maxRSS;
}

@property (nonatomic) bool hasMaxRSS;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long maxRSS;

- (void)deleteMaxRSS;
- (id)dictionaryRepresentation;
- (bool)hasMaxRSS;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned long long)maxRSS;
- (bool)readFrom:(id)arg1;
- (void)setHasMaxRSS:(bool)arg1;
- (void)setMaxRSS:(unsigned long long)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
