
@interface ORCHSchemaORCHTRPFinalized : SISchemaInstrumentationMessage {
    bool  _hasTrpId;
    SISchemaUUID * _trpId;
}

@property (nonatomic) bool hasTrpId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *trpId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteTrpId;
- (id)dictionaryRepresentation;
- (bool)hasTrpId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasTrpId:(bool)arg1;
- (void)setTrpId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)trpId;
- (void)writeTo:(id)arg1;

@end
