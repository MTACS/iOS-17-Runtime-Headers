
@interface DeliveryAccount : MFAccount <EDDeliveryAccount>

@property (nonatomic, readonly, copy) NSString *altDSID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSArray *emailAddressStrings;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *hostname;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) unsigned long long maximumMessageBytes;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, readonly) bool primaryiCloudAccount;
@property (nonatomic, readonly, copy) NSString *statisticsKind;
@property (readonly) Class superclass;
@property (nonatomic, readonly) ACAccount *systemAccount;
@property (nonatomic, readonly, copy) NSString *username;

+ (void)_postDeliveryAccountsHaveChanged;
+ (id)accountTypeIdentifier;
+ (id)accountWithHostname:(id)arg1 username:(id)arg2;
+ (id)accountWithHostname:(id)arg1 username:(id)arg2 lookForExistingAccounts:(bool)arg3;
+ (id)accountWithIdentifier:(id)arg1;
+ (id)accountWithUniqueId:(id)arg1;
+ (void)addDeliveryAccount:(id)arg1;
+ (id)carrierDeliveryAccount;
+ (id)deliveryAccounts;
+ (id)existingAccountForUniqueID:(id)arg1;
+ (id)existingAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)existingAccountWithIdentifier:(id)arg1;
+ (id)newDefaultInstance;
+ (void)reloadDeliveryAccounts;
+ (void)removeDeliveryAccount:(id)arg1;

- (void)_setAccountProperties:(id)arg1;
- (void)_updateAccountDescriptionWithUsername:(id)arg1 hostname:(id)arg2;
- (bool)canBeFallbackAccount;
- (Class)deliveryClass;
- (id)displayHostname;
- (bool)hasEnoughInformationForEasySetup;
- (bool)hasNoReferences;
- (id)identifier;
- (id)mailAccountIfAvailable;
- (unsigned long long)maximumMessageBytes;
- (id)newDeliveryWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4;
- (id)newDeliveryWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(bool)arg3;
- (id)newDeliveryWithMessage:(id)arg1;
- (void)setMaximumMessageBytes:(unsigned long long)arg1;
- (void)setShouldUseAuthentication:(bool)arg1;
- (void)setUsername:(id)arg1;
- (bool)shouldUseAuthentication;
- (bool)shouldUseSaveSentForAccount:(id)arg1;
- (bool)supportsOutboxCopy;

@end
