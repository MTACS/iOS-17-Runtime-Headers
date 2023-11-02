
@interface SISchemaUserDataContainer : SISchemaInstrumentationMessage {
    NSData * _c;
    bool  _hasC;
}

@property (nonatomic, copy) NSData *c;
@property (nonatomic) bool hasC;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)c;
- (void)deleteC;
- (id)dictionaryRepresentation;
- (bool)hasC;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setC:(id)arg1;
- (void)setHasC:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
