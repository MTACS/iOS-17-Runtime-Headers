
@interface CNAutocompleteRecentContactsLibrary : NSObject

+ (void)addLoggingHandlersToFuture:(id)arg1 request:(id)arg2;
+ (id)addressKindsForSearchType:(unsigned long long)arg1;
+ (id)domainsForFetchRequest:(id)arg1;
+ (id)domainsForSearchType:(unsigned long long)arg1;
+ (unsigned long long)implicitGroupThresholdForSearchType:(unsigned long long)arg1;
+ (id)library:(id)arg1 recentContactsWithRequest:(id)arg2;
+ (id)queryForRequest:(id)arg1;

@end
