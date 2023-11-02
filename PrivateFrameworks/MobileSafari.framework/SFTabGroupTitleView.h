
@interface SFTabGroupTitleView : UIButton {
    UILabel * _subtitleLabel;
    WBTabGroup * _tabGroup;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) WBTabGroup *tabGroup;

- (void).cxx_destruct;
- (id)_attributedStringWithImageNamed:(id)arg1 textStyle:(id)arg2 additionalSymbolicTraits:(unsigned int)arg3 color:(id)arg4 baselineOffset:(double)arg5;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTabGroup:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tabGroup;
- (void)updateTitle;

@end
