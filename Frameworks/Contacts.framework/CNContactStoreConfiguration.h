
@interface CNContactStoreConfiguration : NSObject {
    NSObject<OS_tcc_identity> * _assumedIdentity;
    CNContactsEnvironment * _environment;
    bool  _includeDonatedContacts;
    bool  _includeIncludeManagedAppleIDs;
    bool  _includeLocalContacts;
    bool  _includeSharedPhotoContacts;
    bool  _includeSuggestedContacts;
    bool  _isContactsProvider;
    bool  _leaveSingleStoresUnwrapped;
    CNManagedConfiguration * _managedConfiguration;
    bool  _useInProcessMapperExclusively;
    bool  _useOutOfProcessMapperExclusively;
}

@property (nonatomic, retain) NSObject<OS_tcc_identity> *assumedIdentity;
@property (nonatomic, retain) CNContactsEnvironment *environment;
@property (nonatomic) bool includeDonatedContacts;
@property (nonatomic) bool includeIncludeManagedAppleIDs;
@property (nonatomic) bool includeLocalContacts;
@property (nonatomic) bool includeSharedPhotoContacts;
@property (nonatomic) bool includeSuggestedContacts;
@property (nonatomic) bool isContactsProvider;
@property (nonatomic) bool leaveSingleStoresUnwrapped;
@property (nonatomic, retain) CNManagedConfiguration *managedConfiguration;
@property (nonatomic) bool useInProcessMapperExclusively;
@property (nonatomic) bool useOutOfProcessMapperExclusively;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

- (void).cxx_destruct;
- (id)assumedIdentity;
- (id)description;
- (id)environment;
- (bool)includeDonatedContacts;
- (bool)includeIncludeManagedAppleIDs;
- (bool)includeLocalContacts;
- (bool)includeSharedPhotoContacts;
- (bool)includeSuggestedContacts;
- (id)init;
- (bool)isContactsProvider;
- (bool)leaveSingleStoresUnwrapped;
- (id)managedConfiguration;
- (void)setAssumedIdentity:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setIncludeDonatedContacts:(bool)arg1;
- (void)setIncludeIncludeManagedAppleIDs:(bool)arg1;
- (void)setIncludeLocalContacts:(bool)arg1;
- (void)setIncludeSharedPhotoContacts:(bool)arg1;
- (void)setIncludeSuggestedContacts:(bool)arg1;
- (void)setIsContactsProvider:(bool)arg1;
- (void)setLeaveSingleStoresUnwrapped:(bool)arg1;
- (void)setManagedConfiguration:(id)arg1;
- (void)setUseInProcessMapperExclusively:(bool)arg1;
- (void)setUseOutOfProcessMapperExclusively:(bool)arg1;
- (bool)useInProcessMapperExclusively;
- (bool)useOutOfProcessMapperExclusively;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

+ (id)tu_contactStoreConfigurationForBundleIdentifier:(id)arg1;
+ (id)tu_contactStoreConfigurationForCall:(id)arg1;
+ (id)tu_contactStoreConfigurationForConversation:(id)arg1;

@end
