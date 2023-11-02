
@interface PGMomentNodeCachedValues : NSObject {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _bestLocationCoordinate;
    bool  _hasAddressNodes;
    bool  _hasAddressNodesIsSet;
    double  _neighborScore;
    PGGraphMomentNode * _nextMomentNode;
    NSSet * _personLocalIdentifiers;
    PGGraphMomentNode * _previousMomentNode;
}

@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } bestLocationCoordinate;
@property (nonatomic) bool hasAddressNodes;
@property (nonatomic) bool hasAddressNodesIsSet;
@property (nonatomic) double neighborScore;
@property (nonatomic, retain) PGGraphMomentNode *nextMomentNode;
@property (nonatomic, retain) NSSet *personLocalIdentifiers;
@property (nonatomic, retain) PGGraphMomentNode *previousMomentNode;

- (void).cxx_destruct;
- (struct CLLocationCoordinate2D { double x1; double x2; })bestLocationCoordinate;
- (bool)hasAddressNodes;
- (bool)hasAddressNodesIsSet;
- (id)init;
- (double)neighborScore;
- (id)nextMomentNode;
- (id)personLocalIdentifiers;
- (id)previousMomentNode;
- (void)setBestLocationCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setHasAddressNodes:(bool)arg1;
- (void)setHasAddressNodesIsSet:(bool)arg1;
- (void)setNeighborScore:(double)arg1;
- (void)setNextMomentNode:(id)arg1;
- (void)setPersonLocalIdentifiers:(id)arg1;
- (void)setPreviousMomentNode:(id)arg1;

@end
