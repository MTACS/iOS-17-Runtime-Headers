
@interface SearchUIActivityIndicatorCardSectionView : SearchUICardSectionView

@property (nonatomic, retain) TLKActivityIndicatorView *contentView;

+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;

@end
