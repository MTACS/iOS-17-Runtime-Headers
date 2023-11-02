
@interface SISchemaDictationContentEdited : SISchemaInstrumentationMessage {
    NSArray * _autoPunctuationEdits;
    bool  _exists;
    struct { 
        unsigned int exists : 1; 
    }  _has;
}

@property (nonatomic, copy) NSArray *autoPunctuationEdits;
@property (nonatomic) bool exists;
@property (nonatomic) bool hasExists;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addAutoPunctuationEdits:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)autoPunctuationEdits;
- (id)autoPunctuationEditsAtIndex:(unsigned long long)arg1;
- (unsigned long long)autoPunctuationEditsCount;
- (void)clearAutoPunctuationEdits;
- (void)deleteAutoPunctuationEdits;
- (void)deleteExists;
- (id)dictionaryRepresentation;
- (bool)exists;
- (bool)hasExists;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAutoPunctuationEdits:(id)arg1;
- (void)setExists:(bool)arg1;
- (void)setHasExists:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
