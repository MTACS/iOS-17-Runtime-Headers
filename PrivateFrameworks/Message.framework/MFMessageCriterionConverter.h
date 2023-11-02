
@interface MFMessageCriterionConverter : NSObject <EFLoggable> {
    <MFMessageCriterionConverterDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MFMessageCriterionConverterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;
+ (id)spotlightBodySearchPredicateForValue:(id)arg1;
+ (id)spotlightRecipientSearchPredicateForValue:(id)arg1 operator:(unsigned long long)arg2;
+ (id)spotlightSearchPredicateForValue:(id)arg1;
+ (id)spotlightSenderSearchPredicateForValue:(id)arg1 operator:(unsigned long long)arg2;
+ (id)spotlightSubjectSearchPredicateForValue:(id)arg1 operator:(unsigned long long)arg2;

- (void).cxx_destruct;
- (long long)_criterionTypeForKey:(id)arg1;
- (long long)_criterionTypeFromExpression:(id)arg1;
- (long long)_defaultCriterionTypeForKey:(id)arg1;
- (id)_defaultKeysForCriterionType:(long long)arg1;
- (id)_messageCriterionForComparisonPredicate:(id)arg1;
- (id)_messageCriterionForCompoundPredicate:(id)arg1;
- (id)_orPredicateForAttributes:(id)arg1 matchingValue:(id)arg2 qualifier:(long long)arg3;
- (id)_predicateForKey:(id)arg1 value:(id)arg2 qualifier:(long long)arg3;
- (id)_predicateKeysForCriterion:(long long)arg1;
- (unsigned long long)_proposedPredicateOperatorType:(unsigned long long)arg1 forKey:(id)arg2;
- (id)_searchPredicateForCriterion:(id)arg1;
- (id)_simplifiedCompoundPredicateOfType:(unsigned long long)arg1 forSubqueries:(id)arg2;
- (id)delegate;
- (id)messageCriterionFromPredicate:(id)arg1;
- (id)messageCriterionFromPredicateFormatString:(id)arg1;
- (id)predicateFromMessageCriterion:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
