
@interface PGAssetCollectionFeatureInstance : NSObject {
    PGGraphFeatureNodeCollection * _featureNodes;
    PGGraphMomentNode * _momentNode;
    PGAssetCollectionFeatureSpecification * _specification;
}

@property (readonly) PGGraphFeatureNodeCollection *featureNodes;
@property (readonly) PGGraphMomentNode *momentNode;
@property (readonly) PGAssetCollectionFeatureSpecification *specification;

- (void).cxx_destruct;
- (id)featureNodes;
- (id)initWithSpecification:(id)arg1 momentNode:(id)arg2;
- (id)initWithSpecification:(id)arg1 momentNode:(id)arg2 featureNodes:(id)arg3;
- (id)momentNode;
- (id)specification;

@end
