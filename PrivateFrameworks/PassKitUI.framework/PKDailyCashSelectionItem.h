
@interface PKDailyCashSelectionItem : NSObject <PKIdentifiable> {
    unsigned long long  _accountState;
    PKCurrencyAmount * _balance;
    bool  _hasAccount;
    bool  _hasPendingApplication;
    bool  _hasRedeemed;
    bool  _loading;
    unsigned long long  _redemptionType;
    bool  _selected;
    unsigned long long  _state;
}

@property (nonatomic, retain) PKCurrencyAmount *balance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAccount;
@property (nonatomic) bool hasPendingApplication;
@property (nonatomic) bool hasRedeemed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic) bool loading;
@property (nonatomic) unsigned long long redemptionType;
@property (nonatomic) bool selected;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)balance;
- (bool)hasAccount;
- (bool)hasPendingApplication;
- (bool)hasRedeemed;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (bool)loading;
- (unsigned long long)redemptionType;
- (bool)selected;
- (void)setBalance:(id)arg1;
- (void)setHasAccount:(bool)arg1;
- (void)setHasPendingApplication:(bool)arg1;
- (void)setHasRedeemed:(bool)arg1;
- (void)setLoading:(bool)arg1;
- (void)setRedemptionType:(unsigned long long)arg1;
- (void)setSelected:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
