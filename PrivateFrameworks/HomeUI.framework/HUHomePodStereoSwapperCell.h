
@interface HUHomePodStereoSwapperCell : UITableViewCell {
    <HUHomePodStereoSwapperCellDelegate> * _delegate;
    unsigned long long  _homePodVariant;
    HUHomePodDetailView * _leftHomePod;
    HUHomePodDetailView * _rightHomePod;
    UIButton * _swapButton;
}

@property (nonatomic) <HUHomePodStereoSwapperCellDelegate> *delegate;
@property (nonatomic) unsigned long long homePodVariant;
@property (nonatomic, retain) HUHomePodDetailView *leftHomePod;
@property (nonatomic, retain) HUHomePodDetailView *rightHomePod;
@property (nonatomic, retain) UIButton *swapButton;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_swap;
- (id)delegate;
- (void)finishSetupWithDelegate:(id)arg1 selectionStyle:(long long)arg2 homePodVariant:(unsigned long long)arg3;
- (unsigned long long)homePodVariant;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)leftHomePod;
- (id)rightHomePod;
- (void)setDelegate:(id)arg1;
- (void)setHomePodVariant:(unsigned long long)arg1;
- (void)setLeftHomePod:(id)arg1;
- (void)setRightHomePod:(id)arg1;
- (void)setSwapButton:(id)arg1;
- (id)swapButton;

@end
