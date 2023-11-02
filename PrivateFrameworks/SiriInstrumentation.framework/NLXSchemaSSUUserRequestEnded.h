
@interface NLXSchemaSSUUserRequestEnded : SISchemaInstrumentationMessage {
    NSArray * _triggeredCacheEntryInfos;
}

@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *triggeredCacheEntryInfos;

- (void).cxx_destruct;
- (void)addTriggeredCacheEntryInfos:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearTriggeredCacheEntryInfos;
- (void)deleteTriggeredCacheEntryInfos;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setTriggeredCacheEntryInfos:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)triggeredCacheEntryInfos;
- (id)triggeredCacheEntryInfosAtIndex:(unsigned long long)arg1;
- (unsigned long long)triggeredCacheEntryInfosCount;
- (void)writeTo:(id)arg1;

@end
