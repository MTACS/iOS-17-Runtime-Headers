
@interface PLLibraryScopeRule : NSObject <NSCopying> {
    PLLibraryScopeConditionDateRange * _dateRangeCondition;
    PLLibraryScopeConditionPerson * _personCondition;
    NSMutableArray * _unknownConditions;
}

@property (nonatomic, readonly) PLLibraryScopeConditionDateRange *dateRangeCondition;
@property (nonatomic, readonly) PLLibraryScopeConditionPerson *personCondition;
@property (nonatomic, readonly) NSMutableArray *unknownConditions;

+ (id)_dictionaryOfArrayOfSingleQueriesToCriteriaFromRuleQuery:(id)arg1 parentQuery:(id)arg2;
+ (id)_knownConditionClasses;
+ (id)_rulesFromQuery:(id)arg1;
+ (id)dataForLibraryScopeRules:(id)arg1;
+ (id)libraryScopeRulesForLibraryScopeRulesData:(id)arg1;
+ (id)queryForLibraryScopeRules:(id)arg1;

- (void).cxx_destruct;
- (void)addCondition:(id)arg1;
- (id)allConditions;
- (id)backingPredicateInPhotoLibrary:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateRangeCondition;
- (id)description;
- (id)initWithQuery:(id)arg1;
- (id)personCondition;
- (id)query;
- (void)removeConditionOfType:(Class)arg1;
- (id)unknownConditions;

@end
