
@interface FLOWSchemaFLOWEntityContext : SISchemaInstrumentationMessage {
    struct { 
        unsigned int numberOfEntitiesShown : 1; 
    }  _has;
    bool  _hasLinkId;
    SISchemaUUID * _linkId;
    unsigned int  _numberOfEntitiesShown;
}

@property (nonatomic) bool hasLinkId;
@property (nonatomic) bool hasNumberOfEntitiesShown;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *linkId;
@property (nonatomic) unsigned int numberOfEntitiesShown;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteLinkId;
- (void)deleteNumberOfEntitiesShown;
- (id)dictionaryRepresentation;
- (bool)hasLinkId;
- (bool)hasNumberOfEntitiesShown;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkId;
- (unsigned int)numberOfEntitiesShown;
- (bool)readFrom:(id)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setHasNumberOfEntitiesShown:(bool)arg1;
- (void)setLinkId:(id)arg1;
- (void)setNumberOfEntitiesShown:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
