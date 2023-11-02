
@interface SearchUIScoreSummaryCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate, TLKSplitHeaderViewDelegate> {
    TLKSplitHeaderView * _splitHeaderView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TLKSplitHeaderView *splitHeaderView;
@property (readonly) Class superclass;

+ (int)defaultSeparatorStyleForRowModel:(id)arg1;
+ (id)dragTitleForCardSection:(id)arg1;
+ (bool)supportsRecyclingForCardSection:(id)arg1;
+ (id)titleForScoreBoard:(id)arg1 forDisplay:(bool)arg2;

- (void).cxx_destruct;
- (id)commandForButtonItem:(id)arg1;
- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x1; double x2; })arg2 forReason:(long long)arg3;
- (void)didPressLeadingButtonForSplitHeader:(id)arg1;
- (void)didPressTrailingButtonForSplitHeader:(id)arg1;
- (bool)hasCommandForButtonItem:(id)arg1;
- (void)performCommandForButtonItem:(id)arg1;
- (void)setSplitHeaderView:(id)arg1;
- (id)setupContentView;
- (id)splitHeaderView;
- (void)updateChevronVisible:(bool)arg1 leaveSpaceForChevron:(bool)arg2;
- (void)updateWithRowModel:(id)arg1;

@end
