
@interface MLRInternalTrialTask : NSObject <NSCopying, NSSecureCoding> {
    NSString * _evaluationID;
    TRIFactorsState * _evaluationState;
    MLRTrialTaskSchedulingPolicy * _policy;
    int  _projectId;
}

@property (nonatomic, readonly) NSString *evaluationID;
@property (nonatomic, readonly) TRIFactorsState *evaluationState;
@property (nonatomic, readonly) MLRTrialTaskSchedulingPolicy *policy;
@property (nonatomic, readonly) int projectId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)evaluationID;
- (id)evaluationState;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvaluationState:(id)arg1 runtimeEvaluation:(id)arg2;
- (id)initWithEvaluationState:(id)arg1 runtimeEvaluation:(id)arg2 pluginProjectId:(int)arg3;
- (id)initWithEvaluationState:(id)arg1 schedulingPolicy:(id)arg2 pluginProjectId:(int)arg3;
- (id)policy;
- (int)projectId;

@end
