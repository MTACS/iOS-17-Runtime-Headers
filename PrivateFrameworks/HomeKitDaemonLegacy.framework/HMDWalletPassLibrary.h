
@interface HMDWalletPassLibrary : HMFObject <HMDWalletPassLibrary, HMFLogging> {
    <HMDWalletPassLibraryDelegate> * _delegate;
    PKPassLibrary * _passLibrary;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMDWalletPassLibraryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) PKPassLibrary *passLibrary;
@property (readonly, copy) NSString *secureElementIdentifier;
@property (readonly) Class superclass;
@property (readonly, copy) NSSet *walletKeys;
@property (getter=isWalletVisible, readonly) bool walletVisible;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)acquireAssertionOfType:(unsigned long long)arg1 withReason:(id)arg2 completion:(id /* block */)arg3;
- (void)addPassAtURL:(id)arg1 completion:(id /* block */)arg2;
- (id)createTemporaryPassDirectoryURL;
- (id)delegate;
- (void)deleteKeyMaterialForSubCredentialId:(id)arg1;
- (void)enableExpressWithAuthData:(id)arg1 passTypeIdentifier:(id)arg2 serialNumber:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchExpressEnablementConflictingPassDescriptionForPassAtURL:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchHomeKeySupportedWithCompletion:(id /* block */)arg1;
- (void)fetchIsExpressEnabledForPassWithTypeIdentifier:(id)arg1 serialNumber:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchTransactionKeyForPassWithTypeIdentifier:(id)arg1 serialNumber:(id)arg2 completion:(id /* block */)arg3;
- (void)generateHomeKeyNFCInfoWithReaderPublicKey:(id)arg1 readerIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)handlePassLibraryDidChangeNotification:(id)arg1;
- (id)initWithWorkQueue:(id)arg1;
- (bool)isExpressModeEnabledForPassUniqueIdentifier:(id)arg1 serialNumber:(id)arg2;
- (bool)isWalletVisible;
- (id)passLibrary;
- (id)passUniqueIDOfWalletKeyWithTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (bool)removePassWithTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (id)secureElementIdentifier;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)updatePassAtURL:(id)arg1 completion:(id /* block */)arg2;
- (id)urlForWalletKeyWithTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (id)walletKeyWithTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (id)walletKeys;
- (id)workQueue;

@end
