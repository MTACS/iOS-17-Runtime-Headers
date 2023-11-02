
@interface KnowledgeGraphKit.MAWrapperLearningStreamUtils : NSObject {
    void assetClassifier;
    void momentClassifier;
}

+ (id)extractFeaturesForMomentNodes:(id)arg1 progressBlock:(id /* block */)arg2;
+ (id)extractFeaturesWithGraph:(id)arg1 mappedAssetFeatures:(id)arg2 progressBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)classifyAssetsWithInputFeatureVectors:(id)arg1;
- (id)classifyMomentsWithInputFeatureVectors:(id)arg1;
- (id)init;
- (id)initWithClasses:(id)arg1 momentFeatureVectors:(id)arg2 assetFeatureVectors:(id)arg3;

@end
