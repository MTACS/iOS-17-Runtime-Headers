
@interface HFConditionCollection : NSObject {
    NSArray * _conditions;
}

@property (nonatomic, retain) NSArray *conditions;
@property (nonatomic, readonly, copy) NSPredicate *predicate;

+ (id)_findBestConditionMatchForPredicates:(id)arg1;
+ (id)_findBestMatchingConditionsForPredicates:(id)arg1;
+ (id)_flattenedSubpredicatesForAndPredicate:(id)arg1;
+ (id)_singleConditionForPredicate:(id)arg1 knownConditionsOnly:(bool)arg2;
+ (id)conditionCollectionForPredicate:(id)arg1;

- (void).cxx_destruct;
- (void)addCondition:(id)arg1;
- (id)conditions;
- (id)init;
- (id)initWithConditions:(id)arg1;
- (id)predicate;
- (void)removeCondition:(id)arg1;
- (void)setConditions:(id)arg1;

@end
