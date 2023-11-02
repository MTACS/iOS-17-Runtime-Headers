
@interface SearchUIWatchListCardSectionView : SearchUICardSectionView <SearchUIWatchListCardRowModelDelegate>

@property (nonatomic, retain) TLKSimpleRowView *contentView;
@property (nonatomic, retain) SearchUIWatchListCardRowModel *rowModel;

+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void)didUpdateRowModel:(id)arg1 animate:(bool)arg2;
- (id)setupContentView;
- (void)updateTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3;
- (void)updateWithRowModel:(id)arg1;

@end
