
@interface HMIFeedback : HMFObject

+ (void)submitFeedbackWithCameraProfileUUID:(id)arg1 clipUUID:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)submitFeedbackWithCameraProfileUUID:(id)arg1 clipUUID:(id)arg2 runRemotely:(bool)arg3 completionHandler:(id /* block */)arg4;

@end
