
@interface WBSPasswordBreachTestCredentialSource : NSObject <WBSPasswordBreachCredentialSource> {
    NSArray * _credentials;
}

@property (nonatomic, readonly) NSArray *credentials;

- (void).cxx_destruct;
- (id)credentials;
- (id)initWithPasswords:(id)arg1;
- (id)savedAccountsForPersistentIdentifiers:(id)arg1;

@end
