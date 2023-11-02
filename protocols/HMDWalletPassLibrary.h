
@protocol HMDWalletPassLibrary <NSObject>

@required

- (void)acquireAssertionOfType:(void *)arg1 withReason:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKAssertion *, NSError *, void*
- (void)addPassAtURL:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSURL *)createTemporaryPassDirectoryURL;
- (<HMDWalletPassLibraryDelegate> *)delegate;
- (void)deleteKeyMaterialForSubCredentialId:(NSString *)arg1;
- (void)enableExpressWithAuthData:(void *)arg1 passTypeIdentifier:(void *)arg2 serialNumber:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSData *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchExpressEnablementConflictingPassDescriptionForPassAtURL:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)fetchHomeKeySupportedWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)fetchIsExpressEnabledForPassWithTypeIdentifier:(void *)arg1 serialNumber:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)fetchTransactionKeyForPassWithTypeIdentifier:(void *)arg1 serialNumber:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)generateHomeKeyNFCInfoWithReaderPublicKey:(void *)arg1 readerIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSData *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMDHomeWalletKeySecureElementInfo *, NSError *, void*
- (bool)isExpressModeEnabledForPassUniqueIdentifier:(NSString *)arg1 serialNumber:(NSString *)arg2;
- (bool)isWalletVisible;
- (NSString *)passUniqueIDOfWalletKeyWithTypeIdentifier:(NSString *)arg1 serialNumber:(NSString *)arg2;
- (bool)removePassWithTypeIdentifier:(NSString *)arg1 serialNumber:(NSString *)arg2;
- (NSString *)secureElementIdentifier;
- (void)setDelegate:(id <HMDWalletPassLibraryDelegate>)arg1;
- (void)start;
- (void)updatePassAtURL:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSURL *)urlForWalletKeyWithTypeIdentifier:(NSString *)arg1 serialNumber:(NSString *)arg2;
- (HMDHomeWalletKey *)walletKeyWithTypeIdentifier:(NSString *)arg1 serialNumber:(NSString *)arg2;
- (NSSet *)walletKeys;

@end
