
@interface GKSplittingDataSource : GKCollectionViewDataSource {
    NSMutableDictionary * _sectionToSectionInfo;
    GKBasicCollectionViewDataSource * _underlyingDataSource;
}

@property (nonatomic, readonly) long long sectionCount;
@property (nonatomic, retain) NSMutableDictionary *sectionToSectionInfo;
@property (nonatomic, retain) GKBasicCollectionViewDataSource *underlyingDataSource;

- (void).cxx_destruct;
- (id)_gkDescriptionWithChildren:(long long)arg1;
- (void)addSectionWithTitle:(id)arg1 sortDescriptors:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionViewDidBecomeInactive:(id)arg1;
- (void)configureDataSource;
- (id)filteredItemsForRawItems:(id)arg1;
- (id)indexPathsForItem:(id)arg1;
- (id)init;
- (id)itemAtIndexPath:(id)arg1;
- (id)itemsForSection:(long long)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)refreshAdditionalInfoForDataType:(unsigned int)arg1 updateNotifier:(id)arg2;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)removeAllSections;
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeSection:(long long)arg1;
- (long long)sectionCount;
- (id)sectionInfoForSection:(long long)arg1;
- (id)sectionToSectionInfo;
- (void)setFilterPredicate:(id)arg1 forSection:(long long)arg2;
- (void)setItems:(id)arg1 forSection:(long long)arg2;
- (void)setSectionToSectionInfo:(id)arg1;
- (void)setSortDescriptors:(id)arg1 forSection:(long long)arg2;
- (void)setUnderlyingDataSource:(id)arg1;
- (id)titleForSection:(long long)arg1;
- (id)underlyingDataSource;
- (void)willUpdateSectionsWithItems:(id)arg1;

@end
