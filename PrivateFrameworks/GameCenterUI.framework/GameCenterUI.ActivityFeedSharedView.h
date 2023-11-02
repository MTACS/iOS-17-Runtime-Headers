
@interface GameCenterUI.ActivityFeedSharedView : UIView {
    void componentData;
    void objectGraph;
    void playerGroupSubartworkView;
    void playerGroupView;
    void titleLabel;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityTitleLabel;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)accessibilityTitleLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAccessibilityLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
