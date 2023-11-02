
@interface NSComparisonPredicate : NSPredicate {
    NSExpression * _lhs;
    NSPredicateOperator * _predicateOperator;
    NSExpression * _rhs;
}

@property (readonly) unsigned long long comparisonPredicateModifier;
@property (readonly) SEL customSelector;
@property (readonly, retain) NSExpression *leftExpression;
@property (readonly) unsigned long long options;
@property (readonly) unsigned long long predicateOperatorType;
@property (readonly, retain) NSExpression *rightExpression;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)predicateWithLeftExpression:(id)arg1 rightExpression:(id)arg2 customSelector:(SEL)arg3;
+ (id)predicateWithLeftExpression:(id)arg1 rightExpression:(id)arg2 modifier:(unsigned long long)arg3 type:(unsigned long long)arg4 options:(unsigned long long)arg5;
+ (id)predicateWithPredicateOperator:(id)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3;
+ (id)predicateWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightKeyPath:(id)arg3;
+ (id)predicateWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightValue:(id)arg3;
+ (bool)supportsSecureCoding;

- (void)_acceptExpressions:(id)arg1 flags:(unsigned long long)arg2;
- (void)_acceptOperator:(id)arg1 flags:(unsigned long long)arg2;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (void)allowEvaluation;
- (unsigned long long)comparisonPredicateModifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (SEL)customSelector;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)generateMetadataDescription;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLeftExpression:(id)arg1 rightExpression:(id)arg2 customSelector:(SEL)arg3;
- (id)initWithLeftExpression:(id)arg1 rightExpression:(id)arg2 modifier:(unsigned long long)arg3 type:(unsigned long long)arg4 options:(unsigned long long)arg5;
- (id)initWithPredicateOperator:(id)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3;
- (id)initWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightKeyPath:(id)arg3;
- (id)initWithPredicateOperator:(id)arg1 leftKeyPath:(id)arg2 rightValue:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)keyPathExpressionForString:(id)arg1;
- (id)leftExpression;
- (unsigned long long)options;
- (id)predicateFormat;
- (id)predicateOperator;
- (unsigned long long)predicateOperatorType;
- (id)predicateWithSubstitutionVariables:(id)arg1;
- (id)rightExpression;
- (void)setPredicateOperator:(id)arg1;

// Image: /System/Library/Frameworks/ClassKit.framework/ClassKit

+ (id)cls_allowedRightKeyPathArrays;

- (id)cls_normalizedPredicate:(id)arg1 error:(id*)arg2;
- (id)cls_validatedRightKeyPathExpression:(id)arg1 leftKeyPath:(id)arg2 forAllowedKeyPaths:(id)arg3 normalizer:(id)arg4 error:(id*)arg5;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (id)cksqlcs_appendSQLToString:(id)arg1 statement:(id)arg2;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

- (id)_keypathsForDerivedPropertyValidation:(id*)arg1;
- (id)minimalFormInContext:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)hk_equalityPredicateWithKey:(id)arg1 value:(id)arg2;
+ (id)hk_inequalityPredicateWithKey:(id)arg1 value:(id)arg2 ascending:(bool)arg3;

- (id)_comparisonFilterWithKeyPath:(id)arg1 operatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 isSubpredicate:(bool)arg5;
- (id)_quantityTypeFromKeyPath:(id)arg1 prefix:(id)arg2;
- (id)hk_filterRepresentationForDataTypes:(id)arg1 isSubpredicate:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

- (id)br_fileObjectIDWithWatchedChildren;
- (id)br_urlWithWatchedChildren;
- (id)br_watchedFileObjectID;
- (id)br_watchedURL;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (id)CKDPQueryFiltersWithTranslator:(id)arg1 error:(id*)arg2;
- (unsigned long long)_comparisonOptionForString:(id)arg1;
- (id)_nearFilterWithKey:(id)arg1 location:(id)arg2 radius:(double)arg3 translator:(id)arg4;
- (id)_parseBasicOperatorFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseBeginsWithFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseBetweenFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseFullTextSearchFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseFullTextSearchUsingContainsTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseInFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseListContainsAllFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseListContainsAnyFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseListContainsFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseNearFiltersWithTranslator:(id)arg1 withError:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/Email.framework/Email

- (id)em_searchableIndexQueryGenerator;

// Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

- (bool)ef_containsKeyPath:(id)arg1;
- (bool)ef_matchesEverything;
- (bool)ef_matchesNothing;
- (id)ef_publicDescription;
- (id)predicateNodeFromPropertyMapper:(id)arg1 addingTablesUsed:(id)arg2;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)hd_sqlPredicateForSelect;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (id)FCCKPQueryFiltersWithTranslator:(id)arg1 error:(id*)arg2;
- (unsigned long long)_comparisonOptionForString:(id)arg1;
- (id)_parseBasicOperatorFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseBeginsWithFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseBetweenFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseFullTextSearchFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseFullTextSearchUsingContainsTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseInFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseListContainsAllFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseListContainsAnyFiltersWithTranslator:(id)arg1 withError:(id*)arg2;
- (id)_parseListContainsFiltersWithTranslator:(id)arg1 withError:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/PerfPowerServicesReader.framework/PerfPowerServicesReader

- (id)_checkTypeForValue:(id)arg1 inKeyPath:(id)arg2;
- (id)pps_sqlPredicateForSelect;

@end
