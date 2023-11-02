
@protocol CalContactsProviderProtocol

@required

- (NSString *)fullNameForFirstContactMatchingEmailAddress:(NSString *)arg1;
- (NSString *)fullNameForFirstContactMatchingPhoneNumber:(NSString *)arg1;
- (NSArray *)unifiedContactsMatchingPredicate:(NSPredicate *)arg1 keysToFetch:(NSArray *)arg2;

@end
