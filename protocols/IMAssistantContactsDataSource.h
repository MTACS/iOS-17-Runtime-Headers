
@protocol IMAssistantContactsDataSource <NSObject>

@required

- (CNContact *)_crossPlatformUnifiedMeContactWithKeysToFetch:(NSArray *)arg1 error:(id*)arg2;
- (CNContact *)unifiedContactWithIdentifier:(NSString *)arg1 keysToFetch:(NSArray *)arg2 error:(id*)arg3;
- (NSArray *)unifiedContactsMatchingPredicate:(NSPredicate *)arg1 keysToFetch:(NSArray *)arg2 error:(id*)arg3;

@end
