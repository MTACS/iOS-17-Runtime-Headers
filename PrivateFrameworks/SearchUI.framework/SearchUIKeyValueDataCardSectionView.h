
@interface SearchUIKeyValueDataCardSectionView : SearchUICardSectionView

@property (nonatomic, retain) TLKKeyValueView *contentView;

+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (id)convertSFKeyValueData:(id)arg1;
- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;

@end
