
@interface PXTransientCollectionsDataSource : PXCollectionsDataSource {
    PHFetchResult * _fetchResult;
}

@property (nonatomic, readonly) PHFetchResult *fetchResult;

- (void).cxx_destruct;
- (id)collectionAtIndexPath:(id)arg1;
- (id)collectionListForSection:(long long)arg1;
- (id)fetchResult;
- (id)indexPathForCollection:(id)arg1;
- (id)init;
- (id)initWithFetchResult:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;

@end
