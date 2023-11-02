
@interface SearchUIMovieCardSectionView : SearchUICardSectionView

@property (nonatomic, retain) NUIContainerStackView *contentView;
@property (nonatomic, retain) SFMediaInfoCardSection *section;

+ (id)dragTitleForCardSection:(id)arg1;

- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (id)setupContentView;

@end
