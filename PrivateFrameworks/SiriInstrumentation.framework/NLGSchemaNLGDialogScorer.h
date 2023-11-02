
@interface NLGSchemaNLGDialogScorer : SISchemaInstrumentationMessage {
    int  _dialogScorerType;
    struct { 
        unsigned int dialogScorerType : 1; 
    }  _has;
}

@property (nonatomic) int dialogScorerType;
@property (nonatomic) bool hasDialogScorerType;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteDialogScorerType;
- (int)dialogScorerType;
- (id)dictionaryRepresentation;
- (bool)hasDialogScorerType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDialogScorerType:(int)arg1;
- (void)setHasDialogScorerType:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
