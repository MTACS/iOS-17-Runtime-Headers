
@interface SICSchemaProvisionalSICClientEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasSicId;
    SISchemaUUID * _sicId;
}

@property (nonatomic) bool hasSicId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *sicId;

- (void).cxx_destruct;
- (void)deleteSicId;
- (id)dictionaryRepresentation;
- (bool)hasSicId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSicId:(bool)arg1;
- (void)setSicId:(id)arg1;
- (id)sicId;
- (void)writeTo:(id)arg1;

@end
