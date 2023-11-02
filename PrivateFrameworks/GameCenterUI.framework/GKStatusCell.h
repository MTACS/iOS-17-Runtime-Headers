
@interface GKStatusCell : GKCollectionViewCell {
    UILabel * _statusLabel;
}

@property (nonatomic, retain) UILabel *statusLabel;

- (void).cxx_destruct;
- (bool)canRemoveItem;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setStatus:(id)arg1;
- (void)setStatusLabel:(id)arg1;
- (id)statusLabel;

@end
