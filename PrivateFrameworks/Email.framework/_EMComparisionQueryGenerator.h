
@interface _EMComparisionQueryGenerator : NSObject <EMSearchableIndexQueryGenerator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_attributesForPredicate:(id)arg1 propertyMapper:(id)arg2;
- (id)_comparisonOperatorForPredicate:(id)arg1;
- (unsigned long long)_modifiersForPredicate:(id)arg1;
- (id)_patternMatchStringForPredicate:(id)arg1;
- (id)queryExpressionFromPredicate:(id)arg1 propertyMapper:(id)arg2 languages:(id)arg3;

@end
