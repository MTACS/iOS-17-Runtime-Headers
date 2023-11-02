
@interface SISchemaLanguageProfile : SISchemaInstrumentationMessage {
    bool  _hasL;
    NSData * _l;
}

@property (nonatomic) bool hasL;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSData *l;

- (void).cxx_destruct;
- (void)deleteL;
- (id)dictionaryRepresentation;
- (bool)hasL;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)l;
- (bool)readFrom:(id)arg1;
- (void)setHasL:(bool)arg1;
- (void)setL:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
