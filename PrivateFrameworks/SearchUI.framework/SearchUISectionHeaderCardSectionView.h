
@interface SearchUISectionHeaderCardSectionView : SearchUICardSectionView

@property (nonatomic, retain) TLKSectionHeaderView *contentView;

+ (bool)fillsBackgroundWithContentForRowModel:(id)arg1;
+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;

@end
