
@interface TRIPersistedFactorsState : TRIPBMessage

@property (nonatomic, retain) TRIPersistedBMLTFactorsState *bmlt;
@property (nonatomic, retain) TRIPersistedExperimentFactorsState *experiment;
@property (nonatomic, retain) TRIPersistedRolloutFactorsState *rollout;
@property (nonatomic, readonly) int stateOneOfCase;

+ (id)descriptor;

@end
