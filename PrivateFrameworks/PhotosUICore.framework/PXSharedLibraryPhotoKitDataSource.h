
@interface PXSharedLibraryPhotoKitDataSource : PXSharedLibraryDataSource {
    PHFetchResult * _fetchResult;
}

- (void).cxx_destruct;
- (id)dataSourceUpdatedWithChange:(id)arg1 changeDetails:(id*)arg2;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathForObjectReference:(id)arg1;
- (id)initWithFetchResult:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)sharedLibraryAtItemIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;

@end
