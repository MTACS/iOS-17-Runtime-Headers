
@interface HealthExperienceUI.SwitchCollectionViewCell : HealthExperienceUI.CollectionViewListDisclosureCellNonSelectable {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_imageAccessory;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_switchViewAccessory;
    void baseIdentifier;
    void delegate;
    void switchView;
}

@property (nonatomic) bool highlighted;
@property (nonatomic) bool selected;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (bool)isSelected;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)switchTapped;

@end
