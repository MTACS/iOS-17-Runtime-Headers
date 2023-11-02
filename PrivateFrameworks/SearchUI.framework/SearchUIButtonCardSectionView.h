
@interface SearchUIButtonCardSectionView : SearchUICardSectionView

@property (nonatomic, retain) TLKButtonView *contentView;

+ (bool)fillsBackgroundWithContentForCardSection:(id)arg1;
+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;

@end
