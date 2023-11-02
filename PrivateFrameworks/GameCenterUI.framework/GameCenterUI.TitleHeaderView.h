
@interface GameCenterUI.TitleHeaderView : GameCenterUI.BaseCollectionReusableView {
    void accessory;
    void accessoryAction;
    void accessoryView;
    void allowsAccessibilityLayouts;
    void avoidanceRegion;
    void detailLabel;
    void iconArtworkView;
    void separatorInset;
    void separatorLineView;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  style;
    void titleLabel;
}

@property (nonatomic, readonly) UIView *accessibilityAccessoryView;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityTitleLabel;
@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic, retain) _TtC12GameCenterUI11ArtworkView *iconArtworkView;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *titleLabel;

- (void).cxx_destruct;
- (bool)_disableRasterizeInAnimations;
- (id)accessibilityAccessoryView;
- (id)accessibilityLabel;
- (id)accessibilityTitleLabel;
- (id)accessoryView;
- (void)didTapWithAccessoryView:(id)arg1;
- (id)iconArtworkView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessoryView:(id)arg1;
- (void)setIconArtworkView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;

@end
