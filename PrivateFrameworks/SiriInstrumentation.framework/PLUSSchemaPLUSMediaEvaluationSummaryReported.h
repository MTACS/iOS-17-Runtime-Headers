
@interface PLUSSchemaPLUSMediaEvaluationSummaryReported : SISchemaInstrumentationMessage {
    PLUSSchemaPLUSMediaConfiguredState * _configuredState;
    NSArray * _groundTruthSummaries;
    struct { 
        unsigned int playUserFeedback : 1; 
    }  _has;
    bool  _hasConfiguredState;
    bool  _hasOriginalRequestId;
    bool  _hasResultCandidateId;
    bool  _hasSuggestionEvaluation;
    SISchemaUUID * _originalRequestId;
    int  _playUserFeedback;
    NSString * _resultCandidateId;
    PLUSSchemaPLUSMediaSuggestionEvaluation * _suggestionEvaluation;
}

@property (nonatomic, retain) PLUSSchemaPLUSMediaConfiguredState *configuredState;
@property (nonatomic, copy) NSArray *groundTruthSummaries;
@property (nonatomic) bool hasConfiguredState;
@property (nonatomic) bool hasOriginalRequestId;
@property (nonatomic) bool hasPlayUserFeedback;
@property (nonatomic) bool hasResultCandidateId;
@property (nonatomic) bool hasSuggestionEvaluation;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *originalRequestId;
@property (nonatomic) int playUserFeedback;
@property (nonatomic, copy) NSString *resultCandidateId;
@property (nonatomic, retain) PLUSSchemaPLUSMediaSuggestionEvaluation *suggestionEvaluation;

- (void).cxx_destruct;
- (void)addGroundTruthSummaries:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearGroundTruthSummaries;
- (id)configuredState;
- (void)deleteConfiguredState;
- (void)deleteGroundTruthSummaries;
- (void)deleteOriginalRequestId;
- (void)deletePlayUserFeedback;
- (void)deleteResultCandidateId;
- (void)deleteSuggestionEvaluation;
- (id)dictionaryRepresentation;
- (id)groundTruthSummaries;
- (id)groundTruthSummariesAtIndex:(unsigned long long)arg1;
- (unsigned long long)groundTruthSummariesCount;
- (bool)hasConfiguredState;
- (bool)hasOriginalRequestId;
- (bool)hasPlayUserFeedback;
- (bool)hasResultCandidateId;
- (bool)hasSuggestionEvaluation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)originalRequestId;
- (int)playUserFeedback;
- (bool)readFrom:(id)arg1;
- (id)resultCandidateId;
- (void)setConfiguredState:(id)arg1;
- (void)setGroundTruthSummaries:(id)arg1;
- (void)setHasConfiguredState:(bool)arg1;
- (void)setHasOriginalRequestId:(bool)arg1;
- (void)setHasPlayUserFeedback:(bool)arg1;
- (void)setHasResultCandidateId:(bool)arg1;
- (void)setHasSuggestionEvaluation:(bool)arg1;
- (void)setOriginalRequestId:(id)arg1;
- (void)setPlayUserFeedback:(int)arg1;
- (void)setResultCandidateId:(id)arg1;
- (void)setSuggestionEvaluation:(id)arg1;
- (id)suggestionEvaluation;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
