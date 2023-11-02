
@interface VNSceneprintMLFeatureProvider : NSObject <MLFeatureProvider> {
    <MLFeatureProvider> * _originalFeatureProvider;
    VNSceneprint * _sceneprint;
    long long  _sceneprintDataType;
    NSString * _sceneprintKey;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithSceneprint:(id)arg1 dataType:(long long)arg2 forKey:(id)arg3 originalFeatureProvider:(id)arg4;

@end
