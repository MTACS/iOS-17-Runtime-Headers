
@interface DKNotableUserDataProvider : NSObject <DKNotableUserDataProvider> {
    <DKAccountProvider> * _accountProvider;
    <DKFindMyProvider> * _findMyProvider;
    <DKStorageProvider> * _storageProvider;
    <DKTelephonyProvider> * _telephonyProvider;
    <DKWalletProvider> * _walletProvider;
}

@property (nonatomic, retain) <DKAccountProvider> *accountProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <DKFindMyProvider> *findMyProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <DKStorageProvider> *storageProvider;
@property (readonly) Class superclass;
@property (nonatomic, retain) <DKTelephonyProvider> *telephonyProvider;
@property (nonatomic, retain) <DKWalletProvider> *walletProvider;

- (void).cxx_destruct;
- (id)accountProvider;
- (void)fetchNotableUserData:(id /* block */)arg1;
- (id)findMyProvider;
- (id)init;
- (id)initWithAccountProvider:(id)arg1 findMyProvider:(id)arg2 walletProvider:(id)arg3;
- (void)setAccountProvider:(id)arg1;
- (void)setFindMyProvider:(id)arg1;
- (void)setStorageProvider:(id)arg1;
- (void)setTelephonyProvider:(id)arg1;
- (void)setWalletProvider:(id)arg1;
- (id)storageProvider;
- (id)telephonyProvider;
- (id)walletProvider;

@end
