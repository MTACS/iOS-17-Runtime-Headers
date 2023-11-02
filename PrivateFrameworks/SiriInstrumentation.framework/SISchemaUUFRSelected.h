
@interface SISchemaUUFRSelected : SISchemaInstrumentationMessage {
    SISchemaUUFRCasinoCardSelected * _casinoCardSelected;
    bool  _hasCasinoCardSelected;
    bool  _hasSnippetViewSelected;
    SISchemaUUFRSnippetViewSelected * _snippetViewSelected;
    unsigned long long  _whichSelectionevent;
}

@property (nonatomic, retain) SISchemaUUFRCasinoCardSelected *casinoCardSelected;
@property (nonatomic) bool hasCasinoCardSelected;
@property (nonatomic) bool hasSnippetViewSelected;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUFRSnippetViewSelected *snippetViewSelected;
@property (nonatomic, readonly) unsigned long long whichSelectionevent;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)casinoCardSelected;
- (void)deleteCasinoCardSelected;
- (void)deleteSnippetViewSelected;
- (id)dictionaryRepresentation;
- (bool)hasCasinoCardSelected;
- (bool)hasSnippetViewSelected;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCasinoCardSelected:(id)arg1;
- (void)setHasCasinoCardSelected:(bool)arg1;
- (void)setHasSnippetViewSelected:(bool)arg1;
- (void)setSnippetViewSelected:(id)arg1;
- (id)snippetViewSelected;
- (id)suppressMessageUnderConditions;
- (unsigned long long)whichSelectionevent;
- (void)writeTo:(id)arg1;

@end
