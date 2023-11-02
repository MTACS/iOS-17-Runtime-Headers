
@interface TRIMLRuntimeEvaluation : TRIPBMessage

@property (nonatomic, copy) NSString *evaluationId;
@property (nonatomic) bool hasEvaluationId;
@property (nonatomic) bool hasPluginId;
@property (nonatomic) bool hasPluginProjectId;
@property (nonatomic) bool hasSchedulingPolicy;
@property (nonatomic, copy) NSString *pluginId;
@property (nonatomic) int pluginProjectId;
@property (nonatomic, retain) TRIMLRuntimeSchedulingPolicy *schedulingPolicy;

+ (id)descriptor;

@end
