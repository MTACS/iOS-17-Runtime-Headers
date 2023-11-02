
@interface SFSharablePassword : NSObject <NSSecureCoding> {
    NSString * _customTitle;
    NSString * _displayName;
    NSString * _highLevelDomain;
    NSString * _notesEntry;
    NSURL * _otpAuthURL;
    NSData * _passkeyCredential;
    NSData * _passkeyCredentialID;
    NSString * _passkeyRelyingPartyID;
    NSString * _password;
    NSArray * _protectionSpaces;
    NSString * _username;
}

@property (nonatomic, readonly, copy) NSString *customTitle;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly) bool hasAnyCredentialData;
@property (nonatomic, readonly) bool hasPasswordWithConflicts;
@property (nonatomic, readonly, copy) NSString *highLevelDomain;
@property (nonatomic, readonly, copy) NSString *notesEntry;
@property (nonatomic, readonly, copy) NSURL *otpAuthURL;
@property (nonatomic, readonly, copy) NSData *passkeyCredential;
@property (nonatomic, readonly, copy) NSData *passkeyCredentialID;
@property (nonatomic, readonly, copy) NSString *passkeyRelyingPartyID;
@property (nonatomic, readonly, copy) NSString *password;
@property (nonatomic, readonly) NSURL *passwordManagerURL;
@property (nonatomic, readonly, copy) NSArray *protectionSpaces;
@property (nonatomic, readonly, copy) NSString *username;

+ (id)_decryptedDataForEncryptedData:(id)arg1 encryptionKeyReference:(id)arg2;
+ (bool)safariCredentialURLHasPasskey:(id)arg1;
+ (id)sharablePasswordFromData:(id)arg1;
+ (id)sharablePasswordFromEncryptedData:(id)arg1 encryptionKeyReference:(id)arg2;
+ (id)sharablePasswordFromURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_encryptionInformationWithNewKey;
- (bool)_hasPasskeyData;
- (bool)_hasPasswordData;
- (id)_queryItemsForAirDropRepresentationWithEncryptionInformation:(id)arg1;
- (void)_saveCustomTitleForSavedAccount:(id)arg1;
- (void)_saveNotesEntryForSavedAccount:(id)arg1;
- (void)_saveOneTimeCodeForSavedAccount:(id)arg1;
- (id)_savePasskeyAccount;
- (id)_savePasswordAccount;
- (id)_usernameOrEmptyString;
- (id)customTitle;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAnyCredentialData;
- (bool)hasPasswordWithConflicts;
- (unsigned long long)hash;
- (id)highLevelDomain;
- (id)initWithCoder:(id)arg1;
- (id)initWithSavedPassword:(id)arg1;
- (id)initWithUsername:(id)arg1 password:(id)arg2 displayName:(id)arg3 highLevelDomain:(id)arg4 passkeyRelyingPartyID:(id)arg5 protectionSpaces:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)notesEntry;
- (id)otpAuthURL;
- (id)passkeyCredential;
- (id)passkeyCredentialID;
- (id)passkeyRelyingPartyID;
- (id)password;
- (id)passwordManagerURL;
- (id)protectionSpaces;
- (void)savePasskeyAccountAndMergeIntoSavedPasswordAccountIfNeeded:(id)arg1;
- (id)saveToKeychain;
- (id)urlRepresentationForAirDrop;
- (id)username;

@end
