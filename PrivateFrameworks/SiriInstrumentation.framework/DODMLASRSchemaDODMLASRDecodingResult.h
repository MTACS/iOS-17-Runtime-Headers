
@interface DODMLASRSchemaDODMLASRDecodingResult : SISchemaInstrumentationMessage {
    NSArray * _alignments;
    NSString * _configName;
    unsigned long long  _decodeDurationInNs;
    DODMLASRSchemaDODMLASRDecodingMetrics * _decodingMetrics;
    struct { 
        unsigned int decodeDurationInNs : 1; 
    }  _has;
    bool  _hasConfigName;
    bool  _hasDecodingMetrics;
    NSArray * _tokens;
    NSArray * _utterances;
}

@property (nonatomic, copy) NSArray *alignments;
@property (nonatomic, copy) NSString *configName;
@property (nonatomic) unsigned long long decodeDurationInNs;
@property (nonatomic, retain) DODMLASRSchemaDODMLASRDecodingMetrics *decodingMetrics;
@property (nonatomic) bool hasConfigName;
@property (nonatomic) bool hasDecodeDurationInNs;
@property (nonatomic) bool hasDecodingMetrics;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *tokens;
@property (nonatomic, copy) NSArray *utterances;

- (void).cxx_destruct;
- (void)addAlignments:(id)arg1;
- (void)addTokens:(id)arg1;
- (void)addUtterances:(id)arg1;
- (id)alignments;
- (id)alignmentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)alignmentsCount;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearAlignments;
- (void)clearTokens;
- (void)clearUtterances;
- (id)configName;
- (unsigned long long)decodeDurationInNs;
- (id)decodingMetrics;
- (void)deleteAlignments;
- (void)deleteConfigName;
- (void)deleteDecodeDurationInNs;
- (void)deleteDecodingMetrics;
- (void)deleteTokens;
- (void)deleteUtterances;
- (id)dictionaryRepresentation;
- (bool)hasConfigName;
- (bool)hasDecodeDurationInNs;
- (bool)hasDecodingMetrics;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAlignments:(id)arg1;
- (void)setConfigName:(id)arg1;
- (void)setDecodeDurationInNs:(unsigned long long)arg1;
- (void)setDecodingMetrics:(id)arg1;
- (void)setHasConfigName:(bool)arg1;
- (void)setHasDecodeDurationInNs:(bool)arg1;
- (void)setHasDecodingMetrics:(bool)arg1;
- (void)setTokens:(id)arg1;
- (void)setUtterances:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)tokens;
- (id)tokensAtIndex:(unsigned long long)arg1;
- (unsigned long long)tokensCount;
- (id)utterances;
- (id)utterancesAtIndex:(unsigned long long)arg1;
- (unsigned long long)utterancesCount;
- (void)writeTo:(id)arg1;

@end
