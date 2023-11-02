
@interface POMMESSchemaPOMMESPegasusSearchQueryUserSpan : SISchemaInstrumentationMessage {
    bool  _hasLabel;
    NSString * _label;
}

@property (nonatomic) bool hasLabel;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *label;

- (void).cxx_destruct;
- (void)deleteLabel;
- (id)dictionaryRepresentation;
- (bool)hasLabel;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)label;
- (bool)readFrom:(id)arg1;
- (void)setHasLabel:(bool)arg1;
- (void)setLabel:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
