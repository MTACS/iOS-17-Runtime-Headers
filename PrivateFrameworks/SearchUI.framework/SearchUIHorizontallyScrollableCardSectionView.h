
@interface SearchUIHorizontallyScrollableCardSectionView : SearchUICardSectionView

@property (nonatomic, retain) SearchUIHorizontallyScrollingContainerView *contentView;

- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (void)setFeedbackDelegate:(id)arg1;
- (id)setupContentView;

@end
