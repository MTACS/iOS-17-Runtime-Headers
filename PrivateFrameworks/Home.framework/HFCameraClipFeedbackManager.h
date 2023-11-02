
@interface HFCameraClipFeedbackManager : NSObject

+ (void)donateAllCameraClipsForCameraProfile:(id)arg1 completion:(id /* block */)arg2;
+ (void)donateCameraClip:(id)arg1 forCameraProfile:(id)arg2 completion:(id /* block */)arg3;
+ (void)donateCameraClip:(id)arg1 forCameraProfile:(id)arg2 processName:(id)arg3 completion:(id /* block */)arg4;
+ (void)donateNotificationCenterCameraClip:(id)arg1 forCameraProfile:(id)arg2 completion:(id /* block */)arg3;

@end
