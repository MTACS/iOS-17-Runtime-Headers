
@interface GKRuleSystem : NSObject {
    NSMutableArray * _agenda;
    NSMutableArray * _executed;
    NSMapTable * _gradeByFact;
    NSMutableArray * _rules;
    NSMutableDictionary * _state;
    NSMutableArray * _toBeExecuted;
}

@property (nonatomic, readonly, retain) NSArray *agenda;
@property (nonatomic, readonly, retain) NSArray *executed;
@property (nonatomic, readonly, retain) NSArray *facts;
@property (nonatomic, readonly, retain) NSArray *rules;
@property (nonatomic, readonly, retain) NSMutableDictionary *state;

- (void).cxx_destruct;
- (void)_addRuleToAgenda:(id)arg1;
- (void)addRule:(id)arg1;
- (void)addRulesFromArray:(id)arg1;
- (id)agenda;
- (void)assertFact:(id)arg1;
- (void)assertFact:(id)arg1 grade:(float)arg2;
- (void)evaluate;
- (id)executed;
- (id)facts;
- (float)gradeForFact:(id)arg1;
- (id)init;
- (float)maximumGradeForFacts:(id)arg1;
- (float)minimumGradeForFacts:(id)arg1;
- (void)removeAllRules;
- (void)reset;
- (void)retractFact:(id)arg1;
- (void)retractFact:(id)arg1 grade:(float)arg2;
- (id)rules;
- (id)state;

@end
