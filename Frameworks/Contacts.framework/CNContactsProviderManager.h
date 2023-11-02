
@interface CNContactsProviderManager : NSObject {
    NSString * _clientBundleIdentifier;
    CNContactsProviderModerator * _moderator;
    _TtC8Contacts22CNContactsProviderHost * _providerHost;
}

@property (nonatomic, readonly) NSString *clientBundleIdentifier;
@property (nonatomic, retain) CNContactsProviderModerator *moderator;
@property (nonatomic, readonly) CNContainer *providerContainer;
@property (nonatomic, retain) _TtC8Contacts22CNContactsProviderHost *providerHost;

+ (bool)isConnectionForContactsProvider:(id)arg1;

- (void).cxx_destruct;
- (id)clientBundleIdentifier;
- (bool)disableExtensionWithBundleIdentifier:(id)arg1 error:(id*)arg2;
- (bool)enableExtensionWithBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)fetchExtensionCount;
- (id)fetchExtensionItems;
- (id)getActualBundleIdentifier:(id)arg1;
- (id)initWithAuditToken:(id)arg1;
- (id)isExtensionEnabledWithBundleIdentifier:(id)arg1;
- (id)moderator;
- (id)providerContainer;
- (id)providerHost;
- (id)requestHostExtensionCommand:(id)arg1 error:(id*)arg2;
- (void)setModerator:(id)arg1;
- (void)setProviderHost:(id)arg1;
- (bool)synchronizeUsingSession:(id)arg1 error:(id*)arg2;

@end
