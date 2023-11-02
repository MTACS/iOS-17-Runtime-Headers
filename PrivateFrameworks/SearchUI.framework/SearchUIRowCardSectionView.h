
@interface SearchUIRowCardSectionView : SearchUICardSectionView

@property (nonatomic, retain) TLKSimpleRowView *contentView;

+ (id)dragSubtitleForCardSection:(id)arg1;
+ (id)dragTitleForCardSection:(id)arg1;
+ (bool)hasLeadingImageForCardSection:(id)arg1;
+ (bool)prefersNoSeparatorAboveRowModel:(id)arg1;
+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (id)leadingTextView;
- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;

@end
