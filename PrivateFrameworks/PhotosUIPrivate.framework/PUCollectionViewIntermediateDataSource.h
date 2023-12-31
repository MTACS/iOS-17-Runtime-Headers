
@interface PUCollectionViewIntermediateDataSource : NSObject <UICollectionViewDataSource> {
    <UICollectionViewDataSource> * _realDataSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <UICollectionViewDataSource> *realDataSource;
@property (readonly) Class superclass;

- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)realDataSource;
- (void)setRealDataSource:(id)arg1;

@end
