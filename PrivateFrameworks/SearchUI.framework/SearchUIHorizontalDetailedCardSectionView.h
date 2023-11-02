
@interface SearchUIHorizontalDetailedCardSectionView : SearchUICardSectionView <SearchUIDetailedViewDelegate>

@property (nonatomic, retain) SearchUIDetailedView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SearchUIDetailedRowModel *rowModel;
@property (readonly) Class superclass;

+ (bool)supportsCustomUserReportRequestAfforance;
+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (bool)configureMenuForFootnoteButton:(id)arg1;
- (void)footnoteButtonPressed;
- (void)setFeedbackDelegate:(id)arg1;
- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;

@end
