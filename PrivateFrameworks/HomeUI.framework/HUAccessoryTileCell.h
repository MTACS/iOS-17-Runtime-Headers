
@interface HUAccessoryTileCell : HUTileCell {
    void delegate;
    void showActivityAfterDelayWorkItem;
    void showUpdatingAfterDelayWorkItem;
    void showingActivity;
    void showingUpdating;
    void showsSizeChangeButton;
    void sizeChangeButton;
}

@property (nonatomic) <HUAccessoryTileCellDelegate> *delegate;
@property (nonatomic) bool showsSizeChangeButton;

- (void).cxx_destruct;
- (id)delegate;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg1;
- (void)setShowsSizeChangeButton:(bool)arg1;
- (void)setShowsSizeChangeButton:(bool)arg1 animated:(bool)arg2;
- (bool)showsSizeChangeButton;
- (void)tileSizeButtonTappedWithSender:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)updateSizeChangeButton;

@end
