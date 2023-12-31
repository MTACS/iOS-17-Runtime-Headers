
@interface SPCoreSpotlightInteractionHandler : NSObject {
    CNContactStore * _contactStore;
}

@property (nonatomic, retain) CNContactStore *contactStore;

- (void).cxx_destruct;
- (id)attributeForIntent:(id)arg1 direction:(long long)arg2;
- (id)contactStore;
- (void)handleInteraction:(id)arg1 bundleID:(id)arg2 protectionClass:(id)arg3;
- (id)interestingContactIdentifiersFromIntent:(id)arg1;
- (void)setContactStore:(id)arg1;

@end
