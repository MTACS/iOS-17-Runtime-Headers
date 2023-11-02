
@interface SISchemaUUFRCasinoCardSelected : SISchemaInstrumentationMessage {
    NSString * _cardSectionId;
    struct { 
        unsigned int ordinalCardSectionPosition : 1; 
    }  _has;
    bool  _hasCardSectionId;
    bool  _hasSnippetAceId;
    int  _ordinalCardSectionPosition;
    NSString * _snippetAceId;
}

@property (nonatomic, copy) NSString *cardSectionId;
@property (nonatomic) bool hasCardSectionId;
@property (nonatomic) bool hasOrdinalCardSectionPosition;
@property (nonatomic) bool hasSnippetAceId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int ordinalCardSectionPosition;
@property (nonatomic, copy) NSString *snippetAceId;

- (void).cxx_destruct;
- (id)cardSectionId;
- (void)deleteCardSectionId;
- (void)deleteOrdinalCardSectionPosition;
- (void)deleteSnippetAceId;
- (id)dictionaryRepresentation;
- (bool)hasCardSectionId;
- (bool)hasOrdinalCardSectionPosition;
- (bool)hasSnippetAceId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)ordinalCardSectionPosition;
- (bool)readFrom:(id)arg1;
- (void)setCardSectionId:(id)arg1;
- (void)setHasCardSectionId:(bool)arg1;
- (void)setHasOrdinalCardSectionPosition:(bool)arg1;
- (void)setHasSnippetAceId:(bool)arg1;
- (void)setOrdinalCardSectionPosition:(int)arg1;
- (void)setSnippetAceId:(id)arg1;
- (id)snippetAceId;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
