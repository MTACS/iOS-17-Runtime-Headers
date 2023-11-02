
@interface SSAppPurchaseHistoryEntry : SSSQLiteEntity

+ (id)databaseTable;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (id)predicateForAccountIdentifier:(id)arg1;
+ (id)predicateForHasMessagesExtension;
+ (id)predicateForIs32BitOnly:(bool)arg1;
+ (id)predicateForNotFirstParty;
+ (id)predicateForNotHidden;
+ (id)supportsPlatformPredicate:(bool)arg1;

@end
