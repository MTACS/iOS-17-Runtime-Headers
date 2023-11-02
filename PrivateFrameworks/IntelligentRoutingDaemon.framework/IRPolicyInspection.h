
@interface IRPolicyInspection : NSObject {
    NSDictionary * _generatorNegativeInputs;
    NSMutableSet * _internalCandidates;
    NSString * _name;
    long long  _stateMachineClassification;
}

@property (nonatomic, readonly) NSSet *candidates;
@property (nonatomic, retain) NSDictionary *generatorNegativeInputs;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) long long stateMachineClassification;

- (void).cxx_destruct;
- (void)addCandidate:(id)arg1;
- (id)candidates;
- (id)generatorNegativeInputs;
- (id)initWithName:(id)arg1;
- (id)name;
- (void)setGeneratorNegativeInputs:(id)arg1;
- (void)setStateMachineClassification:(long long)arg1;
- (long long)stateMachineClassification;

@end
