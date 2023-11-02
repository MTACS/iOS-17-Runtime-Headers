
@interface HUTileCellBackgroundView : UIView {
    void $__lazy_storage_$_controlCenterTileOffMaterialView;
    void $__lazy_storage_$_visualEffectView;
    void currentEffectIdentifier;
    void dashedBorderView;
    void effectGrouper;
}

@property (nonatomic) <HUBackgroundEffectViewGrouping> *effectGrouper;

- (void).cxx_destruct;
- (void)dealloc;
- (id)effectGrouper;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffectIdentifier:(id)arg1 effectGrouper:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setEffectGrouper:(id)arg1;
- (void)updateWithEffectIdentifier:(id)arg1;

@end
