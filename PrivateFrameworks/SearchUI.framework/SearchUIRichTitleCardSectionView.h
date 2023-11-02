
@interface SearchUIRichTitleCardSectionView : SearchUICardSectionView {
    SearchUIButtonItemStackView * _buttonStackView;
    TLKHeaderView * _headerView;
}

@property (retain) SearchUIButtonItemStackView *buttonStackView;
@property (retain) NUIContainerStackView *contentView;
@property (retain) TLKHeaderView *headerView;

+ (int)defaultSeparatorStyleForRowModel:(id)arg1;
+ (id)dragSubtitleForCardSection:(id)arg1;
+ (id)dragTitleForCardSection:(id)arg1;
+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (id)buttonStackView;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x1; double x2; })arg2 forReason:(long long)arg3;
- (id)headerView;
- (void)setButtonStackView:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;

@end
