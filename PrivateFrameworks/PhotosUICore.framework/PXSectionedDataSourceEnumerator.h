
@interface PXSectionedDataSourceEnumerator : PXEnumerator {
    NSNumber * _cachedCount;
    long long  _currentPhase;
    PXSectionedDataSource * _dataSource;
    unsigned long long  _enumeratedTypes;
    PXIndexPathSet * _indexPathSet;
    struct PXSimpleIndexPath { 
        long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _lastIndexPath;
}

@property (nonatomic, readonly) PXSectionedDataSource *dataSource;
@property (nonatomic, readonly) unsigned long long enumeratedTypes;
@property (nonatomic, readonly) PXIndexPathSet *indexPathSet;

- (void).cxx_destruct;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })_nextItemIndexPathFromIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })_nextSectionIndexPathFromIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })_nextSubitemIndexPathFromIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)_setToInitialState;
- (void)_transitionToNextPhase;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)dataSource;
- (unsigned long long)enumeratedTypes;
- (id)firstObject;
- (id)indexPathSet;
- (id)init;
- (id)initWithDataSource:(id)arg1 indexPathSet:(id)arg2 enumeratedTypes:(unsigned long long)arg3;
- (id)nextObject;
- (void)reset;

@end
