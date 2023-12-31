
@interface SearchUISelectableGridCardSectionView : SearchUICardSectionView <TLKSelectableGridViewDelegate>

@property (nonatomic, retain) TLKSelectableGridView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (id)convertSFTitleSubtitleData:(id)arg1;
- (void)selectableGridView:(id)arg1 didChangeSelectedIndex:(long long)arg2;
- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;

@end
