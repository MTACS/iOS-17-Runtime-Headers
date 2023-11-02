
@interface CNDeduplication : NSObject

+ (id)os_log;

- (void)addContactsForIds:(id)arg1 toGroup:(id)arg2 usingRequest:(id)arg3 store:(id)arg4;
- (id)contactsForGroup:(id)arg1 store:(id)arg2;
- (void)deduplicateAllContainers:(id)arg1;
- (void)deduplicateContainer:(id)arg1 store:(id)arg2;
- (void)deduplicateKeeping:(id)arg1 deleting:(id)arg2 store:(id)arg3;
- (id)identifierSetFromContacts:(id)arg1;

@end
