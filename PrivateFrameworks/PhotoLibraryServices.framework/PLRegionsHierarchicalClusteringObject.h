
@interface PLRegionsHierarchicalClusteringObject : NSObject {
    unsigned long long  _index;
    <PLRegionsClusteringItem> * _object;
}

@property unsigned long long index;
@property (nonatomic, readonly) <PLRegionsClusteringItem> *object;

+ (id)clusterObjectWithObject:(id)arg1 index:(unsigned long long)arg2;

- (void).cxx_destruct;
- (unsigned long long)index;
- (id)object;
- (void)setIndex:(unsigned long long)arg1;

@end
