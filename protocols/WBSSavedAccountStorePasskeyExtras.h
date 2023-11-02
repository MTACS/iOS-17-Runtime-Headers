
@protocol WBSSavedAccountStorePasskeyExtras

@required

+ (void)deletePasskeyWithIdentifier:(WBSPublicKeyCredentialIdentifier *)arg1;
+ (WBSPair *)exportPasskeyCredentialWithID:(NSString *)arg1;
+ (NSString *)importPasskeyCredential:(WBSPair *)arg1;
+ (NSArray *)passkeyDataForPasskeyCredentialID:(NSData *)arg1;
+ (NSArray *)passkeysData;
+ (NSArray *)recentlyDeletedPasskeysData;
+ (void)updateUserVisibleName:(NSString *)arg1 forPasskeyWithIdentifier:(WBSPublicKeyCredentialIdentifier *)arg2;

@end
