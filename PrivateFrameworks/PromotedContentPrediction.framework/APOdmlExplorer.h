
@interface APOdmlExplorer : NSObject {
    NSNumber * _clipping_bound;
    NSNumber * _epsilon;
    NSString * _mode;
    NSString * _noise_type;
    NSMutableArray * _sortableObjects;
}

@property (nonatomic, readonly) NSNumber *clipping_bound;
@property (nonatomic, readonly) NSNumber *epsilon;
@property (nonatomic, readonly) NSString *mode;
@property (nonatomic, readonly) NSString *noise_type;
@property (nonatomic, retain) NSMutableArray *sortableObjects;

- (void).cxx_destruct;
- (id)clipping_bound;
- (id)cumulativeEpsilonGreedyProbabilityDistribution;
- (id)epsilon;
- (id)epsilonGreedyProbabilityDistribution;
- (id)explore;
- (id)greedy;
- (id)initWithRankableObjects:(id)arg1 pttrArray:(id)arg2 assetManager:(id)arg3;
- (id)mode;
- (id)noise_type;
- (id)randomizedResponse;
- (id)rankableObjectsFromSortable;
- (void)setSortableObjects:(id)arg1;
- (id)sortableArray:(id)arg1 pttrArray:(id)arg2;
- (id)sortableObjects;

@end
