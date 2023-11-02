
@interface AVTAvatarPoseAnimation : NSObject {
    NSString * _animationBaseKey;
    NSDictionary * _blendshapeAnimations;
    NSDictionary * _perNodeAnimations;
    NSDictionary * _staticPhysicsStates;
    AVTAvatarPose * _staticPose;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) AVTAvatarPose *staticPose;

+ (id)animationFromDataRepresentation:(id)arg1 keyPath:(id)arg2;
+ (id)animationFromDictionaryRepresentation:(id)arg1 keyPath:(id)arg2;
+ (void)dataRepresentationForAnimation:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)dictionaryRepresentationForAnimation:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)optimizeAnimation:(id)arg1 target:(id)arg2;
+ (void)removeAllAnimationsFromAvatar:(id)arg1;

- (void).cxx_destruct;
- (id)_addAnimationToAvatar:(id)arg1 options:(unsigned long long)arg2 transitionInDuration:(double)arg3 transitionOutDuration:(double)arg4 isTransient:(bool)arg5 completionQueue:(id)arg6 completionHandler:(id /* block */)arg7;
- (id)_initWithScene:(id)arg1 usdaMetadata:(struct { bool x1; double x2; double x3; double x4; })arg2 identifier:(id)arg3;
- (id)_initWithStaticPoseRepresentation:(id)arg1 animatedPoseRepresentation:(id)arg2 staticPhysicsStatesRepresentation:(id)arg3 identifier:(id)arg4;
- (id)addToAvatar:(id)arg1 options:(unsigned long long)arg2;
- (id)addToAvatar:(id)arg1 options:(unsigned long long)arg2 transitionDuration:(double)arg3;
- (id)addToAvatar:(id)arg1 useStaticPhysicsState:(bool)arg2;
- (id)addToAvatar:(id)arg1 useStaticPhysicsState:(bool)arg2 transitionDuration:(double)arg3;
- (id)animatedPoseRepresentationWithAnimationRepresentationBuilder:(id /* block */)arg1;
- (id)animatedPoseRepresentationWithDataAnimationRepresentation;
- (id)animatedPoseRepresentationWithDictionaryAnimationRepresentation;
- (id)animationsForAvatar:(id)arg1;
- (void)commonInitWithIdentifier:(id)arg1;
- (double)duration;
- (id)initWithAnimatedPoseRepresentationAtURL:(id)arg1;
- (id)initWithScene:(id)arg1;
- (id)initWithScene:(id)arg1 usdaMetadata:(struct { bool x1; double x2; double x3; double x4; })arg2;
- (id)initWithSceneAtURL:(id)arg1;
- (id)initWithSceneAtURL:(id)arg1 usdaMetadata:(struct { bool x1; double x2; double x3; double x4; })arg2;
- (id)initWithStaticPose:(id)arg1 staticPhysicsStates:(id)arg2;
- (id)initWithStaticPoseRepresentation:(id)arg1 animatedPoseRepresentation:(id)arg2 staticPhysicsStatesRepresentation:(id)arg3;
- (id)physicalizedPose;
- (void)playOnceOnAvatar:(id)arg1 options:(unsigned long long)arg2 transitionInDuration:(double)arg3 transitionOutDuration:(double)arg4 completionQueue:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)staticPose;
- (id)staticPoseRepresentation;

@end
