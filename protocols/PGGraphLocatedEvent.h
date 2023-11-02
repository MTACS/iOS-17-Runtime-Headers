
@protocol PGGraphLocatedEvent <PGGraphEvent>

@required

- (NSSet *)addressNodes;
- (bool)happensPartiallyAtHomeOfPersonNodes:(PGGraphPersonNodeCollection *)arg1;
- (bool)happensPartiallyAtHomeOrWorkOfPersonNodes:(PGGraphPersonNodeCollection *)arg1;
- (bool)happensPartiallyAtWorkOfPersonNodes:(PGGraphPersonNodeCollection *)arg1;
- (bool)hasLocation;
- (NSSet *)poiNodes;
- (NSSet *)roiNodes;

@end
