
@interface RSSSchemaRSSClientEventMetadata : SISchemaInstrumentationMessage {
    bool  _hasRssId;
    SISchemaUUID * _rssId;
}

@property (nonatomic) bool hasRssId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *rssId;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteRssId;
- (id)dictionaryRepresentation;
- (bool)hasRssId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)rssId;
- (void)setHasRssId:(bool)arg1;
- (void)setRssId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
