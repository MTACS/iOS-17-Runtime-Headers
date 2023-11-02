
@interface MFTimeHeaderCollectionViewCell : UICollectionViewListCell {
    <MFTimeHeaderCollectionViewCellDelegate> * _delegate;
    UISwitch * _switchView;
}

@property (nonatomic) <MFTimeHeaderCollectionViewCellDelegate> *delegate;
@property (nonatomic) UISwitch *switchView;

+ (id)reusableIdentifier;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setSwitchView:(id)arg1;
- (void)showTimeWheelCell:(id)arg1;
- (id)switchView;
- (void)updateSecondaryTextWithTime:(id)arg1 timeSwitchEnabled:(bool)arg2;

@end
