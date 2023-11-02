
@interface SPUINavigationBar : UINavigationBar {
    SPUISearchHeader * _header;
    SearchUISeparatorView * _topDividerView;
}

@property (nonatomic, retain) SPUISearchHeader *header;
@property (retain) SearchUISeparatorView *topDividerView;

- (void).cxx_destruct;
- (id)_popNavigationItemWithTransition:(int)arg1;
- (void)didAddSubview:(id)arg1;
- (void)didMoveToWindow;
- (id)header;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isLocked;
- (void)performShowSeparator:(bool)arg1 animated:(bool)arg2;
- (void)pushNavigationItem:(id)arg1 animated:(bool)arg2;
- (void)setHeader:(id)arg1;
- (void)setTopDividerView:(id)arg1;
- (void)showSeparator:(bool)arg1 animated:(bool)arg2;
- (void)tlk_updateForAppearance:(id)arg1;
- (id)topDividerView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBackgroundViewVisibility;

@end
