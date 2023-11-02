
@interface PLUSSchemaPLUSClientEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasPlusId;
    SISchemaUUID * _plusId;
}

@property (nonatomic) bool hasPlusId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *plusId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deletePlusId;
- (id)dictionaryRepresentation;
- (bool)hasPlusId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)plusId;
- (bool)readFrom:(id)arg1;
- (void)setHasPlusId:(bool)arg1;
- (void)setPlusId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
