
@interface PXFetchResultDataSection : PXDataSection {
    PHFetchResult * _fetchResult;
}

@property (nonatomic, readonly) PHFetchResult *fetchResult;

- (void).cxx_destruct;
- (long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)fetchResult;
- (id)initWithFetchResult:(id)arg1;
- (id)initWithOutlineObject:(id)arg1;
- (id)objectAtIndex:(long long)arg1;
- (id)objectsAtIndexes:(id)arg1;

@end
