
@interface NLXSchemaCDMUserParse : SISchemaInstrumentationMessage {
    double  _comparableProbability;
    NLXSchemaCDMCorrectionOutcome * _correctionOutcome;
    struct { 
        unsigned int probability : 1; 
        unsigned int comparableProbability : 1; 
    }  _has;
    bool  _hasCorrectionOutcome;
    bool  _hasId;
    bool  _hasParser;
    bool  _hasRepetitionResult;
    SISchemaUUID * _id;
    NLXSchemaCDMParser * _parser;
    double  _probability;
    NLXSchemaCDMRepetitionResult * _repetitionResult;
    NSArray * _userDialogActs;
}

@property (nonatomic) double comparableProbability;
@property (nonatomic, retain) NLXSchemaCDMCorrectionOutcome *correctionOutcome;
@property (nonatomic) bool hasComparableProbability;
@property (nonatomic) bool hasCorrectionOutcome;
@property (nonatomic) bool hasId;
@property (nonatomic) bool hasParser;
@property (nonatomic) bool hasProbability;
@property (nonatomic) bool hasRepetitionResult;
@property (nonatomic, retain) SISchemaUUID *id;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) NLXSchemaCDMParser *parser;
@property (nonatomic) double probability;
@property (nonatomic, retain) NLXSchemaCDMRepetitionResult *repetitionResult;
@property (nonatomic, copy) NSArray *userDialogActs;

- (void).cxx_destruct;
- (void)addUserDialogActs:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearUserDialogActs;
- (double)comparableProbability;
- (id)correctionOutcome;
- (void)deleteComparableProbability;
- (void)deleteCorrectionOutcome;
- (void)deleteId;
- (void)deleteParser;
- (void)deleteProbability;
- (void)deleteRepetitionResult;
- (void)deleteUserDialogActs;
- (id)dictionaryRepresentation;
- (bool)hasComparableProbability;
- (bool)hasCorrectionOutcome;
- (bool)hasId;
- (bool)hasParser;
- (bool)hasProbability;
- (bool)hasRepetitionResult;
- (unsigned long long)hash;
- (id)id;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)parser;
- (double)probability;
- (bool)readFrom:(id)arg1;
- (id)repetitionResult;
- (void)setComparableProbability:(double)arg1;
- (void)setCorrectionOutcome:(id)arg1;
- (void)setHasComparableProbability:(bool)arg1;
- (void)setHasCorrectionOutcome:(bool)arg1;
- (void)setHasId:(bool)arg1;
- (void)setHasParser:(bool)arg1;
- (void)setHasProbability:(bool)arg1;
- (void)setHasRepetitionResult:(bool)arg1;
- (void)setId:(id)arg1;
- (void)setParser:(id)arg1;
- (void)setProbability:(double)arg1;
- (void)setRepetitionResult:(id)arg1;
- (void)setUserDialogActs:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)userDialogActs;
- (id)userDialogActsAtIndex:(unsigned long long)arg1;
- (unsigned long long)userDialogActsCount;
- (void)writeTo:(id)arg1;

@end
