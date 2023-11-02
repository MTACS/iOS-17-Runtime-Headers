
@interface IRContextWrapper : NSObject {
    NSSet * _candidates;
    long long  _defaultClassification;
    NSString * _name;
}

@property (nonatomic, readonly) NSSet *candidates;
@property (nonatomic, readonly, copy) IRContext *context;
@property (nonatomic, readonly, copy) IRPolicyInspection *policyInspection;

- (void).cxx_destruct;
- (void)addCandidate:(id)arg1 logOrderOfExecution:(bool)arg2;
- (id)candidates;
- (id)context;
- (id)initWithName:(id)arg1 andDefaultClassification:(long long)arg2 andCandidates:(id)arg3;
- (id)initWithName:(id)arg1 defaultClassification:(long long)arg2;
- (id)policyInspection;

@end
