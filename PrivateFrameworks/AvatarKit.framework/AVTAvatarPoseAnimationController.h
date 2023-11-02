
@interface AVTAvatarPoseAnimationController : NSObject <AVTAvatarPoseAnimationController> {
    NSArray * _animationKeys;
    AVTAvatar * _avatar;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithAvatar:(id)arg1 animationKeys:(id)arg2;
- (void)removeAnimationWithBlendOutDuration:(double)arg1;

@end
