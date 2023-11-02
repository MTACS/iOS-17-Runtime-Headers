
@interface DODMLASRSchemaDODMLASRTokenInfo : SISchemaInstrumentationMessage {
    float  _acousticCost;
    struct { 
        unsigned int acousticCost : 1; 
        unsigned int silenceAcousticCost : 1; 
    }  _has;
    bool  _hasToken;
    NSArray * _languageModelCosts;
    NSArray * _numBackoffs;
    float  _silenceAcousticCost;
    ASRSchemaASRToken * _token;
}

@property (nonatomic) float acousticCost;
@property (nonatomic) bool hasAcousticCost;
@property (nonatomic) bool hasSilenceAcousticCost;
@property (nonatomic) bool hasToken;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *languageModelCosts;
@property (nonatomic, copy) NSArray *numBackoffs;
@property (nonatomic) float silenceAcousticCost;
@property (nonatomic, retain) ASRSchemaASRToken *token;

- (void).cxx_destruct;
- (float)acousticCost;
- (void)addLanguageModelCosts:(float)arg1;
- (void)addNumBackoffs:(unsigned int)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearLanguageModelCosts;
- (void)clearNumBackoffs;
- (void)deleteAcousticCost;
- (void)deleteLanguageModelCosts;
- (void)deleteNumBackoffs;
- (void)deleteSilenceAcousticCost;
- (void)deleteToken;
- (id)dictionaryRepresentation;
- (bool)hasAcousticCost;
- (bool)hasSilenceAcousticCost;
- (bool)hasToken;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)languageModelCosts;
- (float)languageModelCostsAtIndex:(unsigned long long)arg1;
- (unsigned long long)languageModelCostsCount;
- (id)numBackoffs;
- (unsigned int)numBackoffsAtIndex:(unsigned long long)arg1;
- (unsigned long long)numBackoffsCount;
- (bool)readFrom:(id)arg1;
- (void)setAcousticCost:(float)arg1;
- (void)setHasAcousticCost:(bool)arg1;
- (void)setHasSilenceAcousticCost:(bool)arg1;
- (void)setHasToken:(bool)arg1;
- (void)setLanguageModelCosts:(id)arg1;
- (void)setNumBackoffs:(id)arg1;
- (void)setSilenceAcousticCost:(float)arg1;
- (void)setToken:(id)arg1;
- (float)silenceAcousticCost;
- (id)suppressMessageUnderConditions;
- (id)token;
- (void)writeTo:(id)arg1;

@end
