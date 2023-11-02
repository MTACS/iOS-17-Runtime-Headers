
@interface SearchUICenteredResultTableViewCell : SearchUITableViewCell

@property (nonatomic, retain) TLKHeaderView *sizingContainer;

- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (void)updateWithRowModel:(id)arg1;

@end
