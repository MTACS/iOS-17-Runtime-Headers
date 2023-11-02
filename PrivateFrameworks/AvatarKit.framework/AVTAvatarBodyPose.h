
@interface AVTAvatarBodyPose : NSObject {
    NSDictionary * _dictionaryRepresentation;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

+ (id)neutralPose;
+ (id)posesInPosePack:(id)arg1;

- (void).cxx_destruct;
- (void)_enumerateJointsForDictionaryRepresentation:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_enumerateJointsForVariantIntensity:(float)arg1 dictionaryRepresentationA:(id)arg2 dictionaryRepresentationB:(id)arg3 usingBlock:(id /* block */)arg4;
- (id)dictionaryRepresentation;
- (void)enumerateJointsForAgeBodyPoseVariantIntensity:(float)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithHierarchy:(id)arg1;
- (id)initWithRootJoints:(id)arg1;
- (id)initWithSceneAtURL:(id)arg1;

@end
