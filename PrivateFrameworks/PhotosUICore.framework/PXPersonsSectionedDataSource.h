
@interface PXPersonsSectionedDataSource : PXSectionedDataSource {
    NSMutableDictionary * _cachedSortedPersonsByTypeAndSection;
    NSDictionary * _faceTiles;
    unsigned long long  _peopleHomeSortingType;
    NSArray * _personsSections;
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, readonly, copy) NSDictionary *faceTiles;
@property (nonatomic, readonly) unsigned long long peopleHomeSortingType;
@property (nonatomic, readonly, copy) NSArray *personsSections;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) long long totalItemCount;

- (void).cxx_destruct;
- (id)_personsInSection:(long long)arg1;
- (id)faceTileForIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)faceTiles;
- (id)initWithPhotoLibrary:(id)arg1 personsSections:(id)arg2 faceTiles:(id)arg3 peopleHomeSortingType:(unsigned long long)arg4;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (unsigned long long)peopleHomeSortingType;
- (id)personsSections;
- (id)photoLibrary;
- (id)sortedObjectsInIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (long long)totalItemCount;

@end
