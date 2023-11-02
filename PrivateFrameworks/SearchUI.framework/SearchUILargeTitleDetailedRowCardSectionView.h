
@interface SearchUILargeTitleDetailedRowCardSectionView : SearchUICardSectionView {
    SearchUIButtonItemStackView * _buttonStackView;
    TLKTextButton * _subtitleButton;
    SearchUILabel * _titleLabel;
}

@property (nonatomic, retain) SearchUIButtonItemStackView *buttonStackView;
@property (nonatomic, retain) TLKStackView *contentView;
@property (nonatomic, retain) TLKTextButton *subtitleButton;
@property (nonatomic, retain) SearchUILabel *titleLabel;

+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (id)buttonStackView;
- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (void)didSelectSubtitleItem;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (void)layoutSubviews;
- (void)setButtonStackView:(id)arg1;
- (void)setSubtitleButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)setupContentView;
- (id)subtitleButton;
- (id)titleLabel;
- (void)updateWithRowModel:(id)arg1;

@end
