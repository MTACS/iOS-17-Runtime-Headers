
@interface TRIPersistedEvaluationStatus : TRIPBMessage

@property (nonatomic, retain) TRIPersistedFactorsState *evalState;
@property (nonatomic, copy) NSString *evaluationId;
@property (nonatomic) bool hasEvalState;
@property (nonatomic) bool hasEvaluationId;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) TRIPBTimestamp *timestamp;
@property (nonatomic) unsigned int type;

+ (id)descriptor;

@end
