
@interface NURuleSystem : NSObject <NSSecureCoding> {
    NSMutableArray * _agenda;
    NSMutableDictionary * _constants;
    bool  _enableLogging;
    NSMutableArray * _executed;
    NSMapTable * _gradeByFact;
    NSMutableArray * _rules;
    NSMutableString * _runLog;
    NSMutableDictionary * _state;
}

@property (nonatomic, readonly, copy) NSArray *agenda;
@property (nonatomic, copy) NSDictionary *constants;
@property (nonatomic) bool enableLogging;
@property (nonatomic, readonly, copy) NSArray *executed;
@property (nonatomic, readonly, copy) NSDictionary *facts;
@property (nonatomic, readonly, copy) NSArray *rules;
@property (nonatomic, readonly, copy) NSString *runLog;
@property (nonatomic, readonly, copy) NSDictionary *state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addRuleToAgenda:(id)arg1;
- (void)addRule:(id)arg1;
- (void)addRulesFromArray:(id)arg1;
- (id)agenda;
- (void)assertFact:(id)arg1;
- (void)assertFact:(id)arg1 grade:(double)arg2;
- (id)constants;
- (id)debugDescription;
- (id)debugQuickLookObject;
- (bool)enableLogging;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluate;
- (id)executed;
- (id)facts;
- (double)gradeForFact:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)maximumGradeForFacts:(id)arg1;
- (double)minimumGradeForFacts:(id)arg1;
- (void)removeAllRules;
- (void)reset;
- (void)resetAndEvaluateWithInitialState:(id)arg1;
- (void)retractFact:(id)arg1;
- (void)retractFact:(id)arg1 grade:(double)arg2;
- (id)rules;
- (id)runLog;
- (void)setConstants:(id)arg1;
- (void)setEnableLogging:(bool)arg1;
- (void)setStateObject:(id)arg1 forKey:(id)arg2;
- (id)state;

@end
