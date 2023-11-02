
@interface HOMESchemaHOMEClientEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasHomeComponentId;
    SISchemaUUID * _homeComponentId;
}

@property (nonatomic) bool hasHomeComponentId;
@property (nonatomic, retain) SISchemaUUID *homeComponentId;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteHomeComponentId;
- (id)dictionaryRepresentation;
- (bool)hasHomeComponentId;
- (unsigned long long)hash;
- (id)homeComponentId;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasHomeComponentId:(bool)arg1;
- (void)setHomeComponentId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
