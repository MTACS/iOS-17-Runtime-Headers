
@interface NLXSchemaSSUUserRequestCacheEntryInfo : SISchemaInstrumentationMessage {
    int  _categoryType;
    double  _closestNegativeExampleScore;
    double  _closestPositiveExampleScore;
    struct { 
        unsigned int triggerReason : 1; 
        unsigned int categoryType : 1; 
        unsigned int numEncodingSimilarityScoreComparisons : 1; 
        unsigned int closestNegativeExampleScore : 1; 
        unsigned int closestPositiveExampleScore : 1; 
    }  _has;
    bool  _hasMatchInfo;
    NLXSchemaSSUUserRequestMatchInfo * _matchInfo;
    unsigned int  _numEncodingSimilarityScoreComparisons;
    int  _triggerReason;
}

@property (nonatomic) int categoryType;
@property (nonatomic) double closestNegativeExampleScore;
@property (nonatomic) double closestPositiveExampleScore;
@property (nonatomic) bool hasCategoryType;
@property (nonatomic) bool hasClosestNegativeExampleScore;
@property (nonatomic) bool hasClosestPositiveExampleScore;
@property (nonatomic) bool hasMatchInfo;
@property (nonatomic) bool hasNumEncodingSimilarityScoreComparisons;
@property (nonatomic) bool hasTriggerReason;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) NLXSchemaSSUUserRequestMatchInfo *matchInfo;
@property (nonatomic) unsigned int numEncodingSimilarityScoreComparisons;
@property (nonatomic) int triggerReason;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)categoryType;
- (double)closestNegativeExampleScore;
- (double)closestPositiveExampleScore;
- (void)deleteCategoryType;
- (void)deleteClosestNegativeExampleScore;
- (void)deleteClosestPositiveExampleScore;
- (void)deleteMatchInfo;
- (void)deleteNumEncodingSimilarityScoreComparisons;
- (void)deleteTriggerReason;
- (id)dictionaryRepresentation;
- (bool)hasCategoryType;
- (bool)hasClosestNegativeExampleScore;
- (bool)hasClosestPositiveExampleScore;
- (bool)hasMatchInfo;
- (bool)hasNumEncodingSimilarityScoreComparisons;
- (bool)hasTriggerReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)matchInfo;
- (unsigned int)numEncodingSimilarityScoreComparisons;
- (bool)readFrom:(id)arg1;
- (void)setCategoryType:(int)arg1;
- (void)setClosestNegativeExampleScore:(double)arg1;
- (void)setClosestPositiveExampleScore:(double)arg1;
- (void)setHasCategoryType:(bool)arg1;
- (void)setHasClosestNegativeExampleScore:(bool)arg1;
- (void)setHasClosestPositiveExampleScore:(bool)arg1;
- (void)setHasMatchInfo:(bool)arg1;
- (void)setHasNumEncodingSimilarityScoreComparisons:(bool)arg1;
- (void)setHasTriggerReason:(bool)arg1;
- (void)setMatchInfo:(id)arg1;
- (void)setNumEncodingSimilarityScoreComparisons:(unsigned int)arg1;
- (void)setTriggerReason:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)triggerReason;
- (void)writeTo:(id)arg1;

@end
