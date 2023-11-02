
@interface DKNotableUserDataCardPrimaryCell : UIView {
    UIImageView * _chevronImageView;
    bool  _expanded;
    bool  _hideChevron;
    UIView * _iconView;
    UIStackView * _labelContainer;
    UIView * _separatorView;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIImageView *chevronImageView;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic) bool hideChevron;
@property (nonatomic, retain) UIView *iconView;
@property (nonatomic, retain) UIStackView *labelContainer;
@property (nonatomic, retain) UIView *separatorView;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)_chevronImage;
- (id)_subtitleFont;
- (id)_titleFont;
- (id)chevronImageView;
- (bool)hideChevron;
- (id)iconView;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 icon:(id)arg3;
- (bool)isExpanded;
- (id)labelContainer;
- (id)separatorView;
- (void)setChevronImageView:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setHideChevron:(bool)arg1;
- (void)setIconView:(id)arg1;
- (void)setLabelContainer:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
