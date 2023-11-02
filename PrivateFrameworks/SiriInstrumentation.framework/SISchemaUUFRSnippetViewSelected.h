
@interface SISchemaUUFRSnippetViewSelected : SISchemaInstrumentationMessage {
    bool  _hasSnippetAceId;
    NSString * _snippetAceId;
}

@property (nonatomic) bool hasSnippetAceId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *snippetAceId;

- (void).cxx_destruct;
- (void)deleteSnippetAceId;
- (id)dictionaryRepresentation;
- (bool)hasSnippetAceId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSnippetAceId:(bool)arg1;
- (void)setSnippetAceId:(id)arg1;
- (id)snippetAceId;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
