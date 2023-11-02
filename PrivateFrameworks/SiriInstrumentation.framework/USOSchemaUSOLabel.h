
@interface USOSchemaUSOLabel : SISchemaInstrumentationMessage {
    bool  _hasValue;
    NSString * _value;
}

@property (nonatomic) bool hasValue;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *value;

- (void).cxx_destruct;
- (void)deleteValue;
- (id)dictionaryRepresentation;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasValue:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)value;
- (void)writeTo:(id)arg1;

@end
