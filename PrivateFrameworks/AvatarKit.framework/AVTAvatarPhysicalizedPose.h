
@interface AVTAvatarPhysicalizedPose : NSObject {
    NSDictionary * _physicsStates;
    AVTAvatarPose * _pose;
}

@property (nonatomic, readonly) NSDictionary *physicsStates;
@property (nonatomic, readonly) AVTAvatarPose *pose;

- (void).cxx_destruct;
- (void)applyToAvatar:(id)arg1;
- (void)applyWithTransitionToAvatar:(id)arg1 duration:(double)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithPose:(id)arg1 physicsStates:(id)arg2;
- (id)initWithPoseRepresentation:(id)arg1 physicsStatesRepresentation:(id)arg2;
- (id)initWithSceneAtURL:(id)arg1;
- (id)physicsStates;
- (id)pose;

@end
