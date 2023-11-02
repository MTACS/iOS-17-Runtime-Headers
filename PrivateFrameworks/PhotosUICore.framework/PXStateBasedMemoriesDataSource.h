
@interface PXStateBasedMemoriesDataSource : PXMemoriesDataSource {
    PXMemoriesDataSourceState * __state;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) PXMemoriesDataSourceState *_state;

- (void).cxx_destruct;
- (id)_state;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })indexPathForObjectReference:(id)arg1;
- (id)initWithState:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (id)sectionedObjectReferenceForMemoryUUID:(id)arg1;

@end
