
@interface NSCompoundPredicate : NSPredicate {
    NSArray * _subpredicates;
    unsigned long long  _type;
}

@property (readonly) unsigned long long compoundPredicateType;
@property (readonly, copy) NSArray *subpredicates;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_operatorForType:(unsigned long long)arg1;
+ (id)andPredicateWithSubpredicates:(id)arg1;
+ (id)notPredicateWithSubpredicate:(id)arg1;
+ (id)orPredicateWithSubpredicates:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)_acceptSubpredicates:(id)arg1 flags:(unsigned long long)arg2;
- (id)_copySubpredicateDescription:(id)arg1;
- (id)_predicateOperator;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (void)allowEvaluation;
- (unsigned long long)compoundPredicateType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)generateMetadataDescription;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 subpredicates:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)predicateFormat;
- (id)predicateOperator;
- (id)predicateWithSubstitutionVariables:(id)arg1;
- (id)subpredicates;

// Image: /System/Library/Frameworks/ClassKit.framework/ClassKit

- (id)cls_normalizedPredicate:(id)arg1 error:(id*)arg2;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (id)cksqlcs_appendSQLToString:(id)arg1 statement:(id)arg2;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

- (void)_cn_acceptVisitor:(id)arg1;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

- (id)_keypathsForDerivedPropertyValidation:(id*)arg1;
- (id)minimalFormInContext:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

- (id)hk_filterRepresentationForDataTypes:(id)arg1 isSubpredicate:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy

- (void)ab_addCallbackContextToArray:(id)arg1;
- (void)ab_bindJoinClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (void)ab_bindSelectClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (bool)ab_hasCallback;
- (id)ab_newQueryWithSortOrder:(unsigned int)arg1 ranked:(bool)arg2 addressBook:(void*)arg3 propertyIndices:(const struct __CFDictionary {}**)arg4;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

- (id)_br_watchedParentURLWithORPredicate1:(id)arg1 predicate2:(id)arg2;
- (id)_br_watchedURLWithORPredicate1:(id)arg1 predicate2:(id)arg2;
- (id)br_urlWithWatchedChildren;
- (id)br_watchedURL;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (id)CKDPQueryFiltersWithTranslator:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/Email.framework/Email

- (id)em_searchableIndexQueryGenerator;

// Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

- (id)_ef_parenthesizedPublicDescription;
- (bool)ef_containsKeyPath:(id)arg1;
- (bool)ef_containsSubpredicate:(id)arg1;
- (bool)ef_matchesEverything;
- (bool)ef_matchesNothing;
- (id)ef_publicDescription;
- (id)ef_simplifiedPredicate;
- (id)predicateNodeFromPropertyMapper:(id)arg1 addingTablesUsed:(id)arg2;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)hd_sqlPredicateForSelect;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (id)FCCKPQueryFiltersWithTranslator:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/PerfPowerServicesReader.framework/PerfPowerServicesReader

- (id)pps_sqlPredicateForSelect;

// Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore

- (id)vui_predicateWithSubpredicateFilterBlock:(id /* block */)arg1;

@end
