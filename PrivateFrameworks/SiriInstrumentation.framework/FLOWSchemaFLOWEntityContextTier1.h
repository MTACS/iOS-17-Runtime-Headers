
@interface FLOWSchemaFLOWEntityContextTier1 : SISchemaInstrumentationMessage {
    NSArray * _entitiesPresenteds;
    FLOWSchemaFLOWEntityTier1 * _entitySelected;
    bool  _hasEntitySelected;
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
}

@property (nonatomic, copy) NSArray *entitiesPresenteds;
@property (nonatomic, retain) FLOWSchemaFLOWEntityTier1 *entitySelected;
@property (nonatomic) bool hasEntitySelected;
@property (nonatomic) bool hasLinkId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;

- (void).cxx_destruct;
- (void)addEntitiesPresented:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearEntitiesPresented;
- (void)deleteEntitiesPresented;
- (void)deleteEntitySelected;
- (void)deleteLinkId;
- (id)dictionaryRepresentation;
- (id)entitiesPresentedAtIndex:(unsigned long long)arg1;
- (unsigned long long)entitiesPresentedCount;
- (id)entitiesPresenteds;
- (id)entitySelected;
- (bool)hasEntitySelected;
- (bool)hasLinkId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (bool)readFrom:(id)arg1;
- (void)setEntitiesPresenteds:(id)arg1;
- (void)setEntitySelected:(id)arg1;
- (void)setHasEntitySelected:(bool)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
