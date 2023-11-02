
@interface SISchemaViewContainer : SISchemaInstrumentationMessage {
    NSString * _dialogIdentifier;
    NSString * _dialogPhase;
    bool  _hasDialogIdentifier;
    bool  _hasDialogPhase;
    bool  _hasSnippetClass;
    bool  _hasViewID;
    NSString * _snippetClass;
    NSString * _viewID;
}

@property (nonatomic, copy) NSString *dialogIdentifier;
@property (nonatomic, copy) NSString *dialogPhase;
@property (nonatomic) bool hasDialogIdentifier;
@property (nonatomic) bool hasDialogPhase;
@property (nonatomic) bool hasSnippetClass;
@property (nonatomic) bool hasViewID;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *snippetClass;
@property (nonatomic, copy) NSString *viewID;

- (void).cxx_destruct;
- (void)deleteDialogIdentifier;
- (void)deleteDialogPhase;
- (void)deleteSnippetClass;
- (void)deleteViewID;
- (id)dialogIdentifier;
- (id)dialogPhase;
- (id)dictionaryRepresentation;
- (bool)hasDialogIdentifier;
- (bool)hasDialogPhase;
- (bool)hasSnippetClass;
- (bool)hasViewID;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDialogIdentifier:(id)arg1;
- (void)setDialogPhase:(id)arg1;
- (void)setHasDialogIdentifier:(bool)arg1;
- (void)setHasDialogPhase:(bool)arg1;
- (void)setHasSnippetClass:(bool)arg1;
- (void)setHasViewID:(bool)arg1;
- (void)setSnippetClass:(id)arg1;
- (void)setViewID:(id)arg1;
- (id)snippetClass;
- (id)suppressMessageUnderConditions;
- (id)viewID;
- (void)writeTo:(id)arg1;

@end
