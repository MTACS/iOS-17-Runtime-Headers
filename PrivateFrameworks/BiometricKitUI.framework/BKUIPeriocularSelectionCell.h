
@interface BKUIPeriocularSelectionCell : UITableViewCell {
    UIImageView * _iconView;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (double)BKUIPeriocularSelectionCellTopBottomPadding;
- (id)_descriptionFont;
- (id)_titleFont;
- (id)iconView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setIconView:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (id)titleLabel;

@end
