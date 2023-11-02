
@interface HotmailAccount : IMAPAccount <MFOAuth2TokenAuthProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)accountTypeIdentifier;
+ (id)authSchemesForAccountClass;
+ (id)deliveryAccountHostname;
+ (unsigned int)deliveryAccountPortNumber;
+ (bool)deliveryAccountUsesSSL;
+ (id)displayedAccountTypeString;
+ (id)emailAddressHostPart;
+ (id)emailAddressWithUsername:(id)arg1;
+ (id)hostname;
+ (bool)isPredefinedAccountType;
+ (bool)primaryDeliveryAccountIsDynamic;
+ (bool)usernameIsEmailAddress;
+ (bool)usesSSL;

- (id)_deliveryAccountCreateIfNeeded:(bool)arg1;
- (unsigned long long)credentialAccessibility;
- (bool)derivesDeliveryAccountInfoFromMailAccount;
- (id)displayUsername;
- (id)emailAddressStrings;
- (id)hostname;
- (id)iconString;
- (id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2;
- (unsigned int)portNumber;
- (id)preferredAuthScheme;
- (id)saveSentFolder;
- (bool)shouldDisplayHostnameInErrorMessages;
- (bool)shouldFetchACEDBInfoForError:(id)arg1;
- (id)statisticsKind;

@end
