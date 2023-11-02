
@interface SearchUICardSectionTableCell : SearchUITableViewCell

@property (readonly) SearchUICardSectionView *cardSectionView;
@property (nonatomic, retain) SearchUICardSectionView *sizingContainer;

- (id)cardSectionView;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (id)leadingTextView;
- (id)leadingView;
- (void)setDelegate:(id)arg1;
- (void)tabKeyPressed;
- (void)updateChevronVisible:(bool)arg1 leaveSpaceForChevron:(bool)arg2;
- (void)updateWithRowModel:(id)arg1;

@end
