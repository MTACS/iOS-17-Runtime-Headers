
@interface WFThreeWayMergingObjectGraph : NSObject {
    NSMapTable * _directPredecessorsForVertexes;
    NSMapTable * _directSuccessorsForVertexes;
    NSMutableOrderedSet * _orderedVertexes;
    id /* block */  _vertexComparator;
}

- (void).cxx_destruct;
- (id)description;

@end
