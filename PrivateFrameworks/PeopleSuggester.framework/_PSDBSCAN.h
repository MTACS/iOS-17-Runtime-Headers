
@interface _PSDBSCAN : NSObject {
    NSMutableSet * _clusteredPoints;
    NSMutableArray * _clusters;
    double  _eps;
    unsigned long long  _minPts;
    NSMutableArray * _noisePoints;
    NSMutableArray * _pointsArray;
    NSMutableSet * _visitedPoints;
}

@property (retain) NSMutableSet *clusteredPoints;
@property (retain) NSMutableArray *clusters;
@property (readonly) double eps;
@property (readonly) unsigned long long minPts;
@property (retain) NSMutableArray *noisePoints;
@property (retain) NSMutableArray *pointsArray;
@property (retain) NSMutableSet *visitedPoints;

- (void).cxx_destruct;
- (id)clusteredPoints;
- (id)clusters;
- (void)emptyCollections;
- (double)eps;
- (id)expandClusterForPoint:(id)arg1 withNeighborIndices:(id)arg2;
- (void)fitData:(id)arg1;
- (id)getNeighborIndices:(unsigned long long)arg1;
- (id)initWithMinimumPointsForClustering:(unsigned long long)arg1 MaxNeighborDistance:(double)arg2;
- (void)mergeCurrNeighbors:(id)arg1 withArray:(id)arg2 andUpdateSet:(id)arg3;
- (unsigned long long)minPts;
- (id)noisePoints;
- (id)pointsArray;
- (void)setClusteredPoints:(id)arg1;
- (void)setClusters:(id)arg1;
- (void)setNoisePoints:(id)arg1;
- (void)setPointsArray:(id)arg1;
- (void)setVisitedPoints:(id)arg1;
- (id)visitedPoints;

@end
