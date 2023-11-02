
@interface SearchUIDetailedRowCardSectionView : SearchUICardSectionView <SearchUIDetailedViewDelegate>

@property (nonatomic, retain) SearchUIDetailedView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SearchUIDetailedRowModel *rowModel;
@property (readonly) Class superclass;

+ (bool)supportsCustomUserReportRequestAfforance;
+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (bool)configureMenuForFootnoteButton:(id)arg1;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x1; double x2; })arg2 forReason:(long long)arg3;
- (id)findDescendentOfView:(id)arg1 matchingClass:(Class)arg2;
- (void)footnoteButtonPressed;
- (id)leadingTextView;
- (id)leadingView;
- (void)setFeedbackDelegate:(id)arg1;
- (id)setupContentView;
- (void)updateChevronVisible:(bool)arg1 leaveSpaceForChevron:(bool)arg2;
- (void)updateWithRowModel:(id)arg1;
- (id)viewForQuickLookZoomTransitionSource;

@end
