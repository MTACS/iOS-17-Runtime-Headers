
@interface PLUSSchemaPLUSContactGroundTruthSourceSummary : SISchemaInstrumentationMessage {
    unsigned long long  _count;
    struct { 
        unsigned int source : 1; 
        unsigned int count : 1; 
    }  _has;
    int  _source;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic) bool hasCount;
@property (nonatomic) bool hasSource;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int source;

- (unsigned long long)count;
- (void)deleteCount;
- (void)deleteSource;
- (id)dictionaryRepresentation;
- (bool)hasCount;
- (bool)hasSource;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCount:(unsigned long long)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setSource:(int)arg1;
- (int)source;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
