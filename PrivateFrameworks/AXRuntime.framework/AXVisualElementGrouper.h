
@interface AXVisualElementGrouper : AXElementGrouper {
    double  _maximumDistanceForAligningEdges;
    double  _maximumNeighbourDistance;
}

@property (nonatomic) double maximumDistanceForAligningEdges;
@property (nonatomic) double maximumNeighbourDistance;

- (id)_groupablesForItems:(id)arg1;
- (id)initWithHeuristics:(long long)arg1;
- (double)maximumDistanceForAligningEdges;
- (double)maximumNeighbourDistance;
- (void)setMaximumDistanceForAligningEdges:(double)arg1;
- (void)setMaximumNeighbourDistance:(double)arg1;

@end
