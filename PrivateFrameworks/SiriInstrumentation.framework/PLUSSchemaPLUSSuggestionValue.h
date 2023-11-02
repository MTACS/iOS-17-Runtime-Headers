
@interface PLUSSchemaPLUSSuggestionValue : SISchemaInstrumentationMessage {
    bool  _hasMediaSuggestion;
    bool  _hasUniversalSuggestion;
    PLUSSchemaPLUSMediaSuggestion * _mediaSuggestion;
    PLUSSchemaPLUSUniversalSuggestion * _universalSuggestion;
    unsigned long long  _whichSuggestion;
}

@property (nonatomic) bool hasMediaSuggestion;
@property (nonatomic) bool hasUniversalSuggestion;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) PLUSSchemaPLUSMediaSuggestion *mediaSuggestion;
@property (nonatomic, retain) PLUSSchemaPLUSUniversalSuggestion *universalSuggestion;
@property (nonatomic, readonly) unsigned long long whichSuggestion;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteMediaSuggestion;
- (void)deleteUniversalSuggestion;
- (id)dictionaryRepresentation;
- (bool)hasMediaSuggestion;
- (bool)hasUniversalSuggestion;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)mediaSuggestion;
- (bool)readFrom:(id)arg1;
- (void)setHasMediaSuggestion:(bool)arg1;
- (void)setHasUniversalSuggestion:(bool)arg1;
- (void)setMediaSuggestion:(id)arg1;
- (void)setUniversalSuggestion:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)universalSuggestion;
- (unsigned long long)whichSuggestion;
- (void)writeTo:(id)arg1;

@end
