
@protocol TUContactsDataSource <NSObject>

@required

- (void*)personFromContact:(CNContact *)arg1;
- (NSDictionary *)tu_contactsByRemoteConversationMemberForConversations:(NSArray *)arg1 keyDescriptors:(NSArray *)arg2 error:(id*)arg3;
- (NSDictionary *)tu_contactsForContactHandles:(NSArray *)arg1 keyDescriptors:(NSArray *)arg2 error:(id*)arg3;
- (NSDictionary *)tu_contactsForHandles:(NSArray *)arg1 keyDescriptors:(NSArray *)arg2 error:(id*)arg3;
- (CNFetchResult *)tu_enumeratorForChangeHistoryFetchRequest:(CNChangeHistoryFetchRequest *)arg1 error:(id*)arg2;
- (CNContact *)unifiedContactWithIdentifier:(NSString *)arg1 keysToFetch:(NSArray *)arg2 error:(id*)arg3;
- (NSArray *)unifiedContactsMatchingPredicate:(NSPredicate *)arg1 keysToFetch:(NSArray *)arg2 error:(id*)arg3;

@optional

- (CNContact *)contactForDestinationId:(NSString *)arg1 keysToFetch:(NSArray *)arg2;
- (CNContact *)contactForIdentifier:(NSString *)arg1 keysToFetch:(NSArray *)arg2;

@end
