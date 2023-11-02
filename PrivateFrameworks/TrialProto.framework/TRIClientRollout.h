
@interface TRIClientRollout : TRIPBMessage

@property (nonatomic, retain) TRIAssignment *assignment;
@property (nonatomic, copy) NSString *channelId;
@property (nonatomic) unsigned int deploymentId;
@property (nonatomic) bool hasAssignment;
@property (nonatomic) bool hasChannelId;
@property (nonatomic) bool hasDeploymentId;
@property (nonatomic) bool hasRampId;
@property (nonatomic) bool hasRolloutId;
@property (nonatomic) bool hasShadowEvaluation;
@property (nonatomic, copy) NSString *rampId;
@property (nonatomic, copy) NSString *rolloutId;
@property (nonatomic, retain) NSMutableArray *selectedNamespaceArray;
@property (nonatomic, readonly) unsigned long long selectedNamespaceArray_Count;
@property (nonatomic, retain) TRIShadowEvaluation *shadowEvaluation;

+ (id)descriptor;

@end
