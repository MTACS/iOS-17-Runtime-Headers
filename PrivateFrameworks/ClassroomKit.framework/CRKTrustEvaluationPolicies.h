
@interface CRKTrustEvaluationPolicies : NSObject {
    NSArray * _policyRefs;
}

@property (nonatomic, readonly, copy) NSArray *policyRefs;

+ (id)defaultPolicicesForServerEvaluation;
+ (id)defaultPoliciesForClientEvaluation;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPolicyRefs:(id)arg1;
- (id)policyRefs;

@end
