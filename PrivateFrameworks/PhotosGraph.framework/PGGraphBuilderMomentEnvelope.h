
@interface PGGraphBuilderMomentEnvelope : NSObject {
    PGGraphMomentNode * _momentNode;
    NSArray * _sceneEdges;
}

@property (readonly) PGGraphMomentNode *momentNode;
@property (nonatomic, retain) NSArray *sceneEdges;

- (void).cxx_destruct;
- (id)initWithMomentNode:(id)arg1;
- (id)momentNode;
- (id)sceneEdges;
- (void)setSceneEdges:(id)arg1;

@end
