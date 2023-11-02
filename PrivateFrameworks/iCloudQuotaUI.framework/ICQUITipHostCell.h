
@interface ICQUITipHostCell : PSTableCell {
    UIView * _tipView;
}

@property (nonatomic, retain) UIView *tipView;

+ (long long)cellStyle;

- (void).cxx_destruct;
- (void)_setupContentViewToHostTip;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setTipView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)tipView;

@end
