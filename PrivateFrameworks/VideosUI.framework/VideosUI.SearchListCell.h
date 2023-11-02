
@interface VideosUI.SearchListCell : VUIBaseListViewCell {
    void $__lazy_storage_$_bottomSeparatorView;
    void accessoryImageView;
    void badgeView;
    void buttonView;
    void cellImageView;
    void layout;
    void monogramView;
    void subtitleLabel;
    void titleLabel;
}

@property (nonatomic, retain) VUIButton *buttonView;
@property (nonatomic, retain) VUILabel *subtitleLabel;
@property (nonatomic, retain) VUILabel *titleLabel;

- (void).cxx_destruct;
- (id)buttonView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setButtonView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitleLabel;
- (id)titleLabel;

@end
