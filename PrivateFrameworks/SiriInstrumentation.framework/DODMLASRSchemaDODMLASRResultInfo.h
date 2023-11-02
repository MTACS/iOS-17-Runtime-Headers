
@interface DODMLASRSchemaDODMLASRResultInfo : SISchemaInstrumentationMessage {
    NSArray * _choices;
    struct { 
        unsigned int isAligned : 1; 
    }  _has;
    bool  _hasStageName;
    bool  _isAligned;
    NSString * _stageName;
}

@property (nonatomic, copy) NSArray *choices;
@property (nonatomic) bool hasIsAligned;
@property (nonatomic) bool hasStageName;
@property (nonatomic) bool isAligned;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *stageName;

- (void).cxx_destruct;
- (void)addChoices:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)choices;
- (id)choicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)choicesCount;
- (void)clearChoices;
- (void)deleteChoices;
- (void)deleteIsAligned;
- (void)deleteStageName;
- (id)dictionaryRepresentation;
- (bool)hasIsAligned;
- (bool)hasStageName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isAligned;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setChoices:(id)arg1;
- (void)setHasIsAligned:(bool)arg1;
- (void)setHasStageName:(bool)arg1;
- (void)setIsAligned:(bool)arg1;
- (void)setStageName:(id)arg1;
- (id)stageName;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
