
@interface SFStartPageCustomizationCell : UICollectionViewListCell {
    <SFStartPageCustomizationCellDelegate> * _delegate;
    UISwitch * _switch;
}

@property (nonatomic) <SFStartPageCustomizationCellDelegate> *delegate;
@property (getter=isOn, nonatomic) bool on;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isOn;
- (void)setAccessories:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOn:(bool)arg1;
- (void)valueDidChange:(id)arg1;

@end
