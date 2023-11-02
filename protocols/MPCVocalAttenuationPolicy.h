
@protocol MPCVocalAttenuationPolicy

@required

- (bool)canBeReset;
- (<MPCVocalAttenuationPolicyDelegate> *)delegate;
- (MPCPolicyEvaluation *)evaluation;
- (void)reset;
- (long long)type;

@end
