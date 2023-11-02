
@interface PKAccountViewInterfaceConfiguration : NSObject <NSCopying> {
    PKAccount * _account;
    PKPaymentPass * _cashbackPass;
    unsigned long long  _destination;
    bool  _isNewAccount;
    NSDateComponents * _rewardsDateComponents;
    PKPaymentTransaction * _transaction;
    unsigned long long  _viewStyle;
}

@property (nonatomic, retain) PKAccount *account;
@property (nonatomic, retain) PKPaymentPass *cashbackPass;
@property (nonatomic) unsigned long long destination;
@property (nonatomic) bool isNewAccount;
@property (nonatomic, retain) NSDateComponents *rewardsDateComponents;
@property (nonatomic, retain) PKPaymentTransaction *transaction;
@property (nonatomic) unsigned long long viewStyle;

- (void).cxx_destruct;
- (id)account;
- (id)cashbackPass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)destination;
- (bool)isNewAccount;
- (id)rewardsDateComponents;
- (void)setAccount:(id)arg1;
- (void)setCashbackPass:(id)arg1;
- (void)setDestination:(unsigned long long)arg1;
- (void)setIsNewAccount:(bool)arg1;
- (void)setRewardsDateComponents:(id)arg1;
- (void)setTransaction:(id)arg1;
- (void)setViewStyle:(unsigned long long)arg1;
- (id)transaction;
- (unsigned long long)viewStyle;

@end
