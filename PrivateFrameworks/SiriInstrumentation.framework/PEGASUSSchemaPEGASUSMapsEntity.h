
@interface PEGASUSSchemaPEGASUSMapsEntity : SISchemaInstrumentationMessage {
    NSString * _addressId;
    bool  _hasAddressId;
    bool  _hasMapsFeatureId;
    bool  _hasMuid;
    unsigned long long  _mapsFeatureId;
    unsigned long long  _muid;
    unsigned long long  _whichEntityid;
}

@property (nonatomic, copy) NSString *addressId;
@property (nonatomic) bool hasAddressId;
@property (nonatomic) bool hasMapsFeatureId;
@property (nonatomic) bool hasMuid;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long mapsFeatureId;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, readonly) unsigned long long whichEntityid;

- (void).cxx_destruct;
- (id)addressId;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAddressId;
- (void)deleteMapsFeatureId;
- (void)deleteMuid;
- (id)dictionaryRepresentation;
- (bool)hasAddressId;
- (bool)hasMapsFeatureId;
- (bool)hasMuid;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned long long)mapsFeatureId;
- (unsigned long long)muid;
- (bool)readFrom:(id)arg1;
- (void)setAddressId:(id)arg1;
- (void)setHasAddressId:(bool)arg1;
- (void)setHasMapsFeatureId:(bool)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setMapsFeatureId:(unsigned long long)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichEntityid;
- (void)writeTo:(id)arg1;

@end
