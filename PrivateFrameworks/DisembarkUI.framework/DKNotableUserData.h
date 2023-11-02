
@interface DKNotableUserData : NSObject {
    NSArray * _accounts;
    NSArray * _cellularPlans;
    long long  _dataSize;
    bool  _findMyEnabled;
    DKNotableUserDataWallet * _walletData;
}

@property (nonatomic, retain) NSArray *accounts;
@property (nonatomic, retain) NSArray *cellularPlans;
@property (nonatomic) long long dataSize;
@property (nonatomic) bool findMyEnabled;
@property (nonatomic, retain) DKNotableUserDataWallet *walletData;

- (void).cxx_destruct;
- (id)accounts;
- (id)cellularPlans;
- (long long)dataSize;
- (bool)findMyEnabled;
- (void)setAccounts:(id)arg1;
- (void)setCellularPlans:(id)arg1;
- (void)setDataSize:(long long)arg1;
- (void)setFindMyEnabled:(bool)arg1;
- (void)setWalletData:(id)arg1;
- (id)walletData;

@end
