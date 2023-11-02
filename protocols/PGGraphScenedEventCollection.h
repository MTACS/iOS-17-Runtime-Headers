
@protocol PGGraphScenedEventCollection

@required

- (PGGraphSceneNodeCollection *)highConfidenceSceneNodes;
- (PGGraphSceneNodeCollection *)sceneNodes;
- (PGGraphSceneNodeCollection *)searchConfidenceSceneNodes;

@end
