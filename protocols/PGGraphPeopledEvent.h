
@protocol PGGraphPeopledEvent <PGGraphEvent>

@required

- (NSSet *)consolidatedPersonNodes;
- (NSSet *)consolidatedPersonNodesPresentInAssets;
- (bool)hasPeopleCountingMe:(bool)arg1;
- (NSSet *)personNodes;
- (NSSet *)personNodesInProximity;
- (NSSet *)petNodes;
- (NSSet *)socialGroupNodes;

@end
