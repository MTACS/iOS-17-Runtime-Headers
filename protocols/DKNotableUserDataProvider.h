
@protocol DKNotableUserDataProvider <NSObject>

@required

- (<DKAccountProvider> *)accountProvider;
- (void)fetchNotableUserData:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DKNotableUserData *, void*
- (<DKFindMyProvider> *)findMyProvider;
- (void)setAccountProvider:(id <DKAccountProvider>)arg1;
- (void)setFindMyProvider:(id <DKFindMyProvider>)arg1;
- (void)setStorageProvider:(id <DKStorageProvider>)arg1;
- (void)setTelephonyProvider:(id <DKTelephonyProvider>)arg1;
- (void)setWalletProvider:(id <DKWalletProvider>)arg1;
- (<DKStorageProvider> *)storageProvider;
- (<DKTelephonyProvider> *)telephonyProvider;
- (<DKWalletProvider> *)walletProvider;

@end
