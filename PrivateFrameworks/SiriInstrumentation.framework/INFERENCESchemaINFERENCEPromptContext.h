
@interface INFERENCESchemaINFERENCEPromptContext : SISchemaInstrumentationMessage {
    INFERENCESchemaINFERENCEConfirmationPromptContext * _confirmationPromptContext;
    INFERENCESchemaINFERENCEDisambiguationPromptContext * _disambiguationPromptContext;
    struct { 
        unsigned int tag : 1; 
    }  _has;
    bool  _hasConfirmationPromptContext;
    bool  _hasDisambiguationPromptContext;
    int  _tag;
    unsigned long long  _whichPromptcontext;
}

@property (nonatomic, retain) INFERENCESchemaINFERENCEConfirmationPromptContext *confirmationPromptContext;
@property (nonatomic, retain) INFERENCESchemaINFERENCEDisambiguationPromptContext *disambiguationPromptContext;
@property (nonatomic) bool hasConfirmationPromptContext;
@property (nonatomic) bool hasDisambiguationPromptContext;
@property (nonatomic) bool hasTag;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int tag;
@property (nonatomic, readonly) unsigned long long whichPromptcontext;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)confirmationPromptContext;
- (void)deleteConfirmationPromptContext;
- (void)deleteDisambiguationPromptContext;
- (void)deleteTag;
- (id)dictionaryRepresentation;
- (id)disambiguationPromptContext;
- (bool)hasConfirmationPromptContext;
- (bool)hasDisambiguationPromptContext;
- (bool)hasTag;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setConfirmationPromptContext:(id)arg1;
- (void)setDisambiguationPromptContext:(id)arg1;
- (void)setHasConfirmationPromptContext:(bool)arg1;
- (void)setHasDisambiguationPromptContext:(bool)arg1;
- (void)setHasTag:(bool)arg1;
- (void)setTag:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)tag;
- (unsigned long long)whichPromptcontext;
- (void)writeTo:(id)arg1;

@end
