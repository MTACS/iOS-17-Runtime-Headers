
@interface SearchUIHeroTitleCardSectionView : SearchUICardSectionView {
    SearchUIButtonItemStackView * _buttonItemStackView;
    SearchUILabel * _subtitleLabel;
    SearchUIImageView * _titleImageView;
    SearchUILabel * _titleLabel;
}

@property (nonatomic, retain) SearchUIButtonItemStackView *buttonItemStackView;
@property (nonatomic, retain) TLKStackView *contentView;
@property (nonatomic, retain) SFHeroTitleCardSection *section;
@property (nonatomic, retain) SearchUILabel *subtitleLabel;
@property (nonatomic, retain) SearchUIImageView *titleImageView;
@property (nonatomic, retain) SearchUILabel *titleLabel;

+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (id)buttonItemStackView;
- (void)setButtonItemStackView:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)setupContentView;
- (id)subtitleLabel;
- (id)titleImageView;
- (id)titleLabel;
- (void)updateWithRowModel:(id)arg1;

@end
