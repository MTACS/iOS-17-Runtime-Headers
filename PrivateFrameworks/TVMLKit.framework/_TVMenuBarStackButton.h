
@interface _TVMenuBarStackButton : UIButton {
    NSDictionary * _tabBarItem;
}

@property (nonatomic, retain) NSDictionary *tabBarItem;

- (void).cxx_destruct;
- (void)_configureSubviews;
- (void)_setSelectedOrHighlighted:(bool)arg1;
- (void)_updateImageEdgeInsets;
- (void)_updateSelectionViewForState:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setSelected:(bool)arg1;
- (void)setTabBarItem:(id)arg1;
- (id)tabBarItem;
- (void)traitCollectionDidChange:(id)arg1;

@end
