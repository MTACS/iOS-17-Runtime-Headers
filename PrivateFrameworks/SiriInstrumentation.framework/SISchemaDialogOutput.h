
@interface SISchemaDialogOutput : SISchemaInstrumentationMessage {
    SISchemaRedactableString * _displayedDialogOutput;
    bool  _hasDisplayedDialogOutput;
    bool  _hasSpokenDialogOutput;
    bool  _hasViewID;
    SISchemaRedactableString * _spokenDialogOutput;
    NSString * _viewID;
}

@property (nonatomic, retain) SISchemaRedactableString *displayedDialogOutput;
@property (nonatomic) bool hasDisplayedDialogOutput;
@property (nonatomic) bool hasSpokenDialogOutput;
@property (nonatomic) bool hasViewID;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaRedactableString *spokenDialogOutput;
@property (nonatomic, copy) NSString *viewID;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteDisplayedDialogOutput;
- (void)deleteSpokenDialogOutput;
- (void)deleteViewID;
- (id)dictionaryRepresentation;
- (id)displayedDialogOutput;
- (bool)hasDisplayedDialogOutput;
- (bool)hasSpokenDialogOutput;
- (bool)hasViewID;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDisplayedDialogOutput:(id)arg1;
- (void)setHasDisplayedDialogOutput:(bool)arg1;
- (void)setHasSpokenDialogOutput:(bool)arg1;
- (void)setHasViewID:(bool)arg1;
- (void)setSpokenDialogOutput:(id)arg1;
- (void)setViewID:(id)arg1;
- (id)spokenDialogOutput;
- (id)suppressMessageUnderConditions;
- (id)viewID;
- (void)writeTo:(id)arg1;

@end
