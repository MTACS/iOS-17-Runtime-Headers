
@interface PLUSSchemaPLUSSuggesterDomainSuggestionMetadata : SISchemaInstrumentationMessage {
    bool  _hasMediaMetadata;
    PLUSSchemaPLUSSuggesterMediaSuggestionMetadata * _mediaMetadata;
    unsigned long long  _whichDomainsuggestionmetadata;
}

@property (nonatomic) bool hasMediaMetadata;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) PLUSSchemaPLUSSuggesterMediaSuggestionMetadata *mediaMetadata;
@property (nonatomic, readonly) unsigned long long whichDomainsuggestionmetadata;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteMediaMetadata;
- (id)dictionaryRepresentation;
- (bool)hasMediaMetadata;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)mediaMetadata;
- (bool)readFrom:(id)arg1;
- (void)setHasMediaMetadata:(bool)arg1;
- (void)setMediaMetadata:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichDomainsuggestionmetadata;
- (void)writeTo:(id)arg1;

@end
