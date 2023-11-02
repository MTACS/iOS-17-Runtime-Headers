
@interface WBSPasswordBreachKeychainCredentialSource : NSObject <WBSPasswordBreachCredentialSource>

@property (nonatomic, readonly) NSArray *credentials;

- (id)credentials;
- (id)savedAccountsForPersistentIdentifiers:(id)arg1;

@end
