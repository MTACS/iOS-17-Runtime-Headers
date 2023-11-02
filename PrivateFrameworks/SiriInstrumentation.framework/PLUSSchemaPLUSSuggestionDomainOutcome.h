
@interface PLUSSchemaPLUSSuggestionDomainOutcome : SISchemaInstrumentationMessage {
    bool  _hasMediaOutcome;
    PLUSSchemaPLUSMediaSuggestionOutcome * _mediaOutcome;
    unsigned long long  _whichDomainsuggestionoutcome;
}

@property (nonatomic) bool hasMediaOutcome;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) PLUSSchemaPLUSMediaSuggestionOutcome *mediaOutcome;
@property (nonatomic, readonly) unsigned long long whichDomainsuggestionoutcome;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteMediaOutcome;
- (id)dictionaryRepresentation;
- (bool)hasMediaOutcome;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)mediaOutcome;
- (bool)readFrom:(id)arg1;
- (void)setHasMediaOutcome:(bool)arg1;
- (void)setMediaOutcome:(id)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichDomainsuggestionoutcome;
- (void)writeTo:(id)arg1;

@end
