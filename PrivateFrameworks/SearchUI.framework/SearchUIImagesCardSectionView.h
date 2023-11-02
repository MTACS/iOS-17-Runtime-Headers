
@interface SearchUIImagesCardSectionView : SearchUICardSectionView

@property (nonatomic, retain) TLKImagesView *contentView;

+ (bool)fillsBackgroundWithContentForRowModel:(id)arg1;
+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;

@end
