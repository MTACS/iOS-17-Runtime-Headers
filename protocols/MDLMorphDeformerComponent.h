
@protocol MDLMorphDeformerComponent <MDLComponent>

@required

- (NSArray *)shapeSetTargetCounts;
- (NSArray *)shapeSetTargetWeights;
- (NSArray *)targetShapes;
- (MDLAnimatedScalarArray *)weights;

@end
