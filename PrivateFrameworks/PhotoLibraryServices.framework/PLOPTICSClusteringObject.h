
@interface PLOPTICSClusteringObject : NSObject {
    double  _coreDistance;
    unsigned long long  _index;
    NSMutableArray * _neighbors;
    id  _object;
    unsigned long long  _order;
    bool  _processed;
    double  _reachabilityDistance;
}

@property (nonatomic) double coreDistance;
@property unsigned long long index;
@property (nonatomic, readonly) NSMutableArray *neighbors;
@property (nonatomic, readonly) id object;
@property (nonatomic) unsigned long long order;
@property (nonatomic) bool processed;
@property (nonatomic) double reachabilityDistance;

+ (id)clusterObjectWithObject:(id)arg1 index:(unsigned long long)arg2 epsilon:(double)arg3;

- (void).cxx_destruct;
- (double)coreDistance;
- (unsigned long long)index;
- (id)initWithObject:(id)arg1 index:(unsigned long long)arg2 epsilon:(double)arg3;
- (id)neighborAtIndex:(unsigned long long)arg1;
- (id)neighbors;
- (id)object;
- (unsigned long long)order;
- (bool)processed;
- (double)reachabilityDistance;
- (void)registerNeighbors:(id)arg1 deleteExisting:(bool)arg2;
- (void)setCoreDistance:(double)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setOrder:(unsigned long long)arg1;
- (void)setProcessed:(bool)arg1;
- (void)setReachabilityDistance:(double)arg1;
- (void)sortNeighborsByDistance;
- (void)updateCoreDistanceForNeighbor:(unsigned long long)arg1;

@end
