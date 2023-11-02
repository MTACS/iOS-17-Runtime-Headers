
@interface TRIPersistedBMLTFactorsState : TRIPBMessage

@property (nonatomic, copy) NSString *bmltId;
@property (nonatomic) int deploymentId;
@property (nonatomic) bool hasBmltId;
@property (nonatomic) bool hasDeploymentId;

+ (id)descriptor;

@end
