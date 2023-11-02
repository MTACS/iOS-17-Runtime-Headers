
@interface NLGSchemaNLGDialogCandidateStatistics : SISchemaInstrumentationMessage {
    unsigned int  _count;
    struct { 
        unsigned int count : 1; 
    }  _has;
}

@property (nonatomic) unsigned int count;
@property (nonatomic) bool hasCount;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned int)count;
- (void)deleteCount;
- (id)dictionaryRepresentation;
- (bool)hasCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setHasCount:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
