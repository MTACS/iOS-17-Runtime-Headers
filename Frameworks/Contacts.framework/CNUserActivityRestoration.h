
@interface CNUserActivityRestoration : NSObject

+ (id)contactBestMatchingPayload:(id)arg1 additionalKeysToFetch:(id)arg2 contactStore:(id)arg3 error:(id*)arg4;
+ (id)contactsForServerUUIDs:(id)arg1 additionalKeysToFetch:(id)arg2 contactStore:(id)arg3 error:(id*)arg4;
+ (id)contactsGivenPayload:(id)arg1 keysToFetch:(id)arg2 contactStore:(id)arg3 error:(id*)arg4;
+ (id)contactsToCreateGivenPayload:(id)arg1 error:(id*)arg2;
+ (id)os_log;
+ (id)searchQueryGivenPayload:(id)arg1;

@end
