
@interface MKLaneDirectionCollisionCalculator : NSObject {
    NSMutableDictionary * _collisionsForDirection;
    NSNumber * _directionWithMostCollisions;
    NSMutableArray * _directions;
    bool  _hasCollisions;
}

@property (nonatomic, readonly) NSArray *directions;
@property (nonatomic, readonly) bool hasCollisions;
@property (nonatomic, readonly) bool hasDirectionWithMaxCollisions;

- (void).cxx_destruct;
- (void)_recalculateCollisions;
- (id)directions;
- (bool)hasCollisions;
- (bool)hasDirectionWithMaxCollisions;
- (id)initWithDirections:(id)arg1;
- (void)removeDirectionWithCollisionsLeastSimilarToDirection:(int)arg1;
- (void)removeNextDirectionWithCollisions;

@end
