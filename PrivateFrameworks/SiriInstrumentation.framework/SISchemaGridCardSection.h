
@interface SISchemaGridCardSection : SISchemaInstrumentationMessage {
    int  _cardSource;
    struct { 
        unsigned int cardSource : 1; 
    }  _has;
    NSArray * _resultIdentifiers;
}

@property (nonatomic) int cardSource;
@property (nonatomic) bool hasCardSource;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *resultIdentifiers;

- (void).cxx_destruct;
- (void)addResultIdentifiers:(id)arg1;
- (int)cardSource;
- (void)clearResultIdentifiers;
- (void)deleteCardSource;
- (void)deleteResultIdentifiers;
- (id)dictionaryRepresentation;
- (bool)hasCardSource;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)resultIdentifiers;
- (id)resultIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultIdentifiersCount;
- (void)setCardSource:(int)arg1;
- (void)setHasCardSource:(bool)arg1;
- (void)setResultIdentifiers:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
