
@interface _IKDOMMutationRuleSet : NSObject {
    NSSet * _dependentPathStrings;
    NSArray * _mutationRules;
}

@property (nonatomic, readonly, copy) NSSet *dependentPathStrings;
@property (nonatomic, readonly, copy) NSArray *mutationRules;

- (void).cxx_destruct;
- (id)dependentPathStrings;
- (id)initWithMutationRules:(id)arg1;
- (id)mutationRules;

@end
