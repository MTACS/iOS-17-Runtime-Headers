
@interface PXFeedBasedMemoriesDataSource : PXMemoriesDataSource {
    NSArray * _entries;
}

@property (nonatomic, readonly, copy) NSArray *entries;

- (void).cxx_destruct;
- (id)entries;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathForObjectReference:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)sectionedObjectReferenceForMemoryUUID:(id)arg1;

@end
