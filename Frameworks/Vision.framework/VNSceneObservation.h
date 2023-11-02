
@interface VNSceneObservation : VNFeaturePrintObservation {
    NSString * _sceneprintVersion;
    NSArray * _sceneprints;
}

@property (nonatomic, readonly, copy) NSString *sceneprintVersion;
@property (nonatomic, readonly) NSArray *sceneprints;

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (id)observationWithSceneprints:(id)arg1;
+ (id)sceneprintCurrentVersion;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)VNCoreMLTransformerSceneprintsAndReturnError:(id*)arg1;
- (id)data;
- (unsigned long long)elementCount;
- (unsigned long long)elementType;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 sceneprints:(id)arg2;
- (id)initWithRequestRevision:(unsigned long long)arg1 sceneprints:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)sceneprintVersion;
- (id)sceneprints;
- (id)vn_cloneObject;

@end
