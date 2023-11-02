
@interface PXImportAssetsDataSource : PXAssetsDataSource {
    NSArray * _assetCollections;
    NSDictionary * _assetCollectionsById;
    NSDictionary * _assetsMap;
    bool  _startsAtEnd;
}

@property (nonatomic, readonly) NSArray *assetCollections;
@property (nonatomic, readonly) NSDictionary *assetCollectionsById;
@property (nonatomic, readonly) NSDictionary *assetsMap;

- (void).cxx_destruct;
- (id)allItems;
- (id)allItemsUnsorted;
- (id)allSelectableItems;
- (id)alreadyImportedCollection;
- (id)alreadyImportedItems;
- (id)assetCollectionForIdentifier:(id)arg1;
- (id)assetCollectionForSection:(unsigned long long)arg1;
- (id)assetCollections;
- (id)assetCollectionsById;
- (id)assetsMap;
- (id)description;
- (bool)hasAlreadyImportedSection;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathForObjectReference:(id)arg1;
- (id)init;
- (id)initWithAssetCollections:(id)arg1 assetsMap:(id)arg2;
- (id)initWithAssetCollections:(id)arg1 assetsMap:(id)arg2 startsAtEnd:(bool)arg3;
- (id)itemForImportAssetUuid:(id)arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })itemIndexPathForItem:(id)arg1;
- (id)notYetImportedItems;
- (unsigned long long)numberOfAlreadyImportedItems;
- (unsigned long long)numberOfItems;
- (long long)numberOfItemsInSection:(long long)arg1;
- (unsigned long long)numberOfNotYetImportedItems;
- (long long)numberOfSections;
- (unsigned long long)numberOfSelectableItems;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (long long)sectionForAssetCollection:(id)arg1;
- (bool)startsAtEnd;

@end
