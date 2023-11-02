
@interface CLPInstSchemaCLPNLv4SampleEvaluationEnded : SISchemaInstrumentationMessage {
    bool  _evaluated;
    bool  _evaluationResult;
    bool  _evaluationResultOnTheFirstUserParse;
    struct { 
        unsigned int evaluated : 1; 
        unsigned int evaluationResultOnTheFirstUserParse : 1; 
        unsigned int userStatedTaskOnTheFirstUserParse : 1; 
        unsigned int matchedIndex : 1; 
        unsigned int evaluationResult : 1; 
        unsigned int userProfileSandboxRequested : 1; 
    }  _has;
    int  _matchedIndex;
    bool  _userProfileSandboxRequested;
    bool  _userStatedTaskOnTheFirstUserParse;
}

@property (nonatomic) bool evaluated;
@property (nonatomic) bool evaluationResult;
@property (nonatomic) bool evaluationResultOnTheFirstUserParse;
@property (nonatomic) bool hasEvaluated;
@property (nonatomic) bool hasEvaluationResult;
@property (nonatomic) bool hasEvaluationResultOnTheFirstUserParse;
@property (nonatomic) bool hasMatchedIndex;
@property (nonatomic) bool hasUserProfileSandboxRequested;
@property (nonatomic) bool hasUserStatedTaskOnTheFirstUserParse;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int matchedIndex;
@property (nonatomic) bool userProfileSandboxRequested;
@property (nonatomic) bool userStatedTaskOnTheFirstUserParse;

- (void)deleteEvaluated;
- (void)deleteEvaluationResult;
- (void)deleteEvaluationResultOnTheFirstUserParse;
- (void)deleteMatchedIndex;
- (void)deleteUserProfileSandboxRequested;
- (void)deleteUserStatedTaskOnTheFirstUserParse;
- (id)dictionaryRepresentation;
- (bool)evaluated;
- (bool)evaluationResult;
- (bool)evaluationResultOnTheFirstUserParse;
- (bool)hasEvaluated;
- (bool)hasEvaluationResult;
- (bool)hasEvaluationResultOnTheFirstUserParse;
- (bool)hasMatchedIndex;
- (bool)hasUserProfileSandboxRequested;
- (bool)hasUserStatedTaskOnTheFirstUserParse;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)matchedIndex;
- (bool)readFrom:(id)arg1;
- (void)setEvaluated:(bool)arg1;
- (void)setEvaluationResult:(bool)arg1;
- (void)setEvaluationResultOnTheFirstUserParse:(bool)arg1;
- (void)setHasEvaluated:(bool)arg1;
- (void)setHasEvaluationResult:(bool)arg1;
- (void)setHasEvaluationResultOnTheFirstUserParse:(bool)arg1;
- (void)setHasMatchedIndex:(bool)arg1;
- (void)setHasUserProfileSandboxRequested:(bool)arg1;
- (void)setHasUserStatedTaskOnTheFirstUserParse:(bool)arg1;
- (void)setMatchedIndex:(int)arg1;
- (void)setUserProfileSandboxRequested:(bool)arg1;
- (void)setUserStatedTaskOnTheFirstUserParse:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (bool)userProfileSandboxRequested;
- (bool)userStatedTaskOnTheFirstUserParse;
- (void)writeTo:(id)arg1;

@end
