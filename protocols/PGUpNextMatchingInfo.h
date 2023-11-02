
@protocol PGUpNextMatchingInfo <NSObject>

@required

- (NSString *)debugInfo;
- (bool)isTripMemory;
- (PGGraphMeaningNodeCollection *)meaningNodes;
- (PGGraphFeatureNodeCollection *)memoryFeatureNodes;
- (PGGraphMomentNodeCollection *)momentNodes;
- (PGGraphPersonNodeCollection *)personNodes;
- (NSDate *)representativeDate;
- (CLLocation *)representativeLocation;
- (PGGraphSceneNodeCollection *)sceneNodes;

@end
