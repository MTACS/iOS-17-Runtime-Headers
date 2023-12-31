
@interface PKPaymentPassTableViewCell : PKTableViewCell {
    UIView * _cardSnapshotView;
    UIColor * _disabledMainLabelColor;
    UIColor * _disabledSubTextLabelColor;
    UILabel * _mainLabel;
    UIColor * _mainLabelColor;
    PKPaymentPass * _pass;
    PKPeerPaymentAccount * _peerPaymentAccount;
    UILabel * _subTextLabel;
    UIColor * _subTextLabelColor;
    PKTransitBalanceModel * _transitBalanceModel;
}

@property (nonatomic, retain) UIColor *disabledMainLabelColor;
@property (nonatomic, retain) UIColor *disabledSubTextLabelColor;
@property (nonatomic, retain) UIColor *mainLabelColor;
@property (nonatomic, retain) PKPaymentPass *pass;
@property (nonatomic, retain) PKPeerPaymentAccount *peerPaymentAccount;
@property (nonatomic, retain) UIColor *subTextLabelColor;
@property (nonatomic, retain) PKTransitBalanceModel *transitBalanceModel;

+ (double)heightForCellWithMinimum:(double)arg1 hasSubTitle:(bool)arg2;
+ (id)subTitleFont;
+ (id)titleFont;

- (void).cxx_destruct;
- (void)_updateLabelText;
- (void)_updateLabelTextColors;
- (id)disabledMainLabelColor;
- (id)disabledSubTextLabelColor;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)mainLabelColor;
- (id)pass;
- (id)peerPaymentAccount;
- (void)pk_applyAppearance:(id)arg1;
- (void)setDisabledMainLabelColor:(id)arg1;
- (void)setDisabledSubTextLabelColor:(id)arg1;
- (void)setMainLabelColor:(id)arg1;
- (void)setPass:(id)arg1;
- (void)setPeerPaymentAccount:(id)arg1;
- (void)setSubTextLabelColor:(id)arg1;
- (void)setTransitBalanceModel:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (id)subTextLabelColor;
- (id)transitBalanceModel;

@end
