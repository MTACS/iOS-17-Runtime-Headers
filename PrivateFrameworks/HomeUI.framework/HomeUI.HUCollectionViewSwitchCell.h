
@interface HomeUI.HUCollectionViewSwitchCell : UICollectionViewListCell <HUCellProtocol, HUDisableableCellProtocol> {
    void _disabled;
    void delegate;
    void item;
    void switchView;
}

@property (nonatomic, retain) <_TtP6HomeUI34HUCollectionViewSwitchCellDelegate_> *delegate;
@property (nonatomic) bool disabled;
@property (nonatomic) bool highlighted;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic) bool selected;

- (void).cxx_destruct;
- (void)_toggleOn;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDisabled;
- (bool)isHighlighted;
- (bool)isSelected;
- (id)item;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)updateUIWithAnimation:(bool)arg1;

@end
