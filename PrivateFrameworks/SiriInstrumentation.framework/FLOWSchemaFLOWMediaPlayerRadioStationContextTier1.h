
@interface FLOWSchemaFLOWMediaPlayerRadioStationContextTier1 : SISchemaInstrumentationMessage {
    bool  _hasLinkId;
    bool  _hasStationSeedName;
    SISchemaUUID * _linkId;
    NSString * _stationSeedName;
}

@property (nonatomic) bool hasLinkId;
@property (nonatomic) bool hasStationSeedName;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic, copy) NSString *stationSeedName;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteLinkId;
- (void)deleteStationSeedName;
- (id)dictionaryRepresentation;
- (bool)hasLinkId;
- (bool)hasStationSeedName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setHasStationSeedName:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setStationSeedName:(id)arg1;
- (id)stationSeedName;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
