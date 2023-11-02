
@interface SISchemaAcousticProfile : SISchemaInstrumentationMessage {
    NSData * _a;
    bool  _hasA;
}

@property (nonatomic, copy) NSData *a;
@property (nonatomic) bool hasA;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)a;
- (void)deleteA;
- (id)dictionaryRepresentation;
- (bool)hasA;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setA:(id)arg1;
- (void)setHasA:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
