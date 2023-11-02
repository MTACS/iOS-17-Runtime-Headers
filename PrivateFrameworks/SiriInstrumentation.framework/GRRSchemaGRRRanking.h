
@interface GRRSchemaGRRRanking : SISchemaInstrumentationMessage {
    struct { 
        unsigned int parseType : 1; 
        unsigned int score : 1; 
    }  _has;
    bool  _hasParseId;
    SISchemaUUID * _parseId;
    int  _parseType;
    double  _score;
}

@property (nonatomic) bool hasParseId;
@property (nonatomic) bool hasParseType;
@property (nonatomic) bool hasScore;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *parseId;
@property (nonatomic) int parseType;
@property (nonatomic) double score;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteParseId;
- (void)deleteParseType;
- (void)deleteScore;
- (id)dictionaryRepresentation;
- (bool)hasParseId;
- (bool)hasParseType;
- (bool)hasScore;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)parseId;
- (int)parseType;
- (bool)readFrom:(id)arg1;
- (double)score;
- (void)setHasParseId:(bool)arg1;
- (void)setHasParseType:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setParseId:(id)arg1;
- (void)setParseType:(int)arg1;
- (void)setScore:(double)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
