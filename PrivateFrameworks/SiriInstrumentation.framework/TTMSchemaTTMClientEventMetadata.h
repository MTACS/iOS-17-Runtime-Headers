
@interface TTMSchemaTTMClientEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasTrpId;
    bool  _hasTtmId;
    SISchemaUUID * _trpId;
    SISchemaUUID * _ttmId;
}

@property (nonatomic) bool hasTrpId;
@property (nonatomic) bool hasTtmId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *trpId;
@property (nonatomic, retain) SISchemaUUID *ttmId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteTrpId;
- (void)deleteTtmId;
- (id)dictionaryRepresentation;
- (bool)hasTrpId;
- (bool)hasTtmId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasTrpId:(bool)arg1;
- (void)setHasTtmId:(bool)arg1;
- (void)setTrpId:(id)arg1;
- (void)setTtmId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)trpId;
- (id)ttmId;
- (void)writeTo:(id)arg1;

@end
