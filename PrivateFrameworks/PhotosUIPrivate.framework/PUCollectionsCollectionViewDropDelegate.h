
@interface PUCollectionsCollectionViewDropDelegate : NSObject <UICollectionViewDropDelegate> {
    bool  _dataProviderImplementsAllowDrop;
    <PUCollectionsCollectionViewDropDataProvider> * _dropDataProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PUCollectionsCollectionViewDropDataProvider> *dropDataProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_allowDrop;
- (bool)_canHandleDropSession:(id)arg1;
- (id)_collectionAtIndexPath:(id)arg1;
- (void)_handleDrop:(id)arg1 forItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 canHandleDropSesson:(id)arg2;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (bool)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3;
- (id)dropDataProvider;
- (void)setDropDataProvider:(id)arg1;

@end
