
@interface _HFCompoundConditionMatch : NSObject {
    HFCondition * _matchedCondition;
    NSArray * _matchedPredicates;
}

@property (nonatomic, retain) HFCondition *matchedCondition;
@property (nonatomic, retain) NSArray *matchedPredicates;

+ (id)matchWithCondition:(id)arg1 matchedPredicates:(id)arg2;

- (void).cxx_destruct;
- (id)matchedCondition;
- (id)matchedPredicates;
- (void)setMatchedCondition:(id)arg1;
- (void)setMatchedPredicates:(id)arg1;

@end
