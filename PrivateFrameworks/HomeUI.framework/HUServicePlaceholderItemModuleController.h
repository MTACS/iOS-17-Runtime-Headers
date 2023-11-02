
@interface HUServicePlaceholderItemModuleController : HUItemModuleController {
    HUCollectionLayoutManager * _collectionLayoutManager;
}

@property (nonatomic, retain) HUCollectionLayoutManager *collectionLayoutManager;

- (void).cxx_destruct;
- (Class)collectionCellClassForItem:(id)arg1;
- (id)collectionLayoutManager;
- (id)collectionLayoutSectionForSectionWithIdentifier:(id)arg1 layoutEnvironment:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)initWithModule:(id)arg1;
- (void)setCollectionLayoutManager:(id)arg1;

@end
