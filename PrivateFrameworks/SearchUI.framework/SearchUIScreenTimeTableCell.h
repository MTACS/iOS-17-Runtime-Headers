
@interface SearchUIScreenTimeTableCell : SearchUITableViewCell

@property (retain) SearchUIScreenTimeView *sizingContainer;

- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (void)updateWithRowModel:(id)arg1;
- (id)visibleResults;

@end
