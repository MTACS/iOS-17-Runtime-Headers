
@interface NLXSchemaCDMParser : SISchemaInstrumentationMessage {
    int  _algorithm;
    struct { 
        unsigned int algorithm : 1; 
        unsigned int parserId : 1; 
    }  _has;
    int  _parserId;
}

@property (nonatomic) int algorithm;
@property (nonatomic) bool hasAlgorithm;
@property (nonatomic) bool hasParserId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int parserId;

- (int)algorithm;
- (void)deleteAlgorithm;
- (void)deleteParserId;
- (id)dictionaryRepresentation;
- (bool)hasAlgorithm;
- (bool)hasParserId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)parserId;
- (bool)readFrom:(id)arg1;
- (void)setAlgorithm:(int)arg1;
- (void)setHasAlgorithm:(bool)arg1;
- (void)setHasParserId:(bool)arg1;
- (void)setParserId:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
