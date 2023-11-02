
@interface PGNeighborScoreComputer : NSObject {
    NSMutableDictionary * _momentNodeCachedValuesByIdentifier;
    unsigned long long  _numberOfMomentNodes;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _numberOfMomentNodesLock;
}

- (void).cxx_destruct;
- (struct CLLocationCoordinate2D { double x1; double x2; })_bestLocationCoordinateForMomentNode:(id)arg1;
- (double)_calculateScoreWithNeighborMomentNodes:(id)arg1 referenceDate:(id)arg2 andDistanceBlock:(id /* block */)arg3;
- (double)_calculateScoreWithNeighborMomentNodes:(id)arg1 referenceDate:(id)arg2 referenceDistance:(double)arg3 andDistanceBlock:(id /* block */)arg4;
- (double)_densityScoreWithNeighborMomentNodes:(id)arg1 referenceDate:(id)arg2 andNumberOfAssets:(unsigned long long)arg3;
- (bool)_hasAddressNodesForMomentNode:(id)arg1;
- (double)_locationScoreWithNeighborMomentNodes:(id)arg1 referenceDate:(id)arg2 andLocationCoordinate:(const struct CLLocationCoordinate2D { double x1; double x2; }*)arg3;
- (id)_momentNodeCachedValuesForIdentifier:(unsigned long long)arg1;
- (id)_nextMomentNodeForMomentNode:(id)arg1;
- (double)_peopleScoreWithNeighborMomentNodes:(id)arg1 referenceDate:(id)arg2 andPersonLocalIdentifiers:(id)arg3;
- (id)_personLocalIdentifiersForMomentNode:(id)arg1;
- (id)_previousMomentNodeForMomentNode:(id)arg1;
- (id)init;
- (double)maximumNeighborScoreWithMomentNodes:(id)arg1;
- (double)neighborScoreWithHighlightNode:(id)arg1;
- (double)neighborScoreWithMomentNode:(id)arg1;
- (id)neighborsFromMomentNode:(id)arg1 count:(unsigned long long)arg2 locationRequired:(bool)arg3 minDayDuration:(unsigned long long)arg4 maxDayDuration:(unsigned long long)arg5;

@end
