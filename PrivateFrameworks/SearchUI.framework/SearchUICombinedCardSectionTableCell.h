
@interface SearchUICombinedCardSectionTableCell : SearchUITableViewCell

@property (nonatomic, retain) SearchUICombinedCardSectionsView *sizingContainer;

- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (void)updateChevronVisible:(bool)arg1 leaveSpaceForChevron:(bool)arg2;
- (void)updateWithRowModel:(id)arg1;

@end
