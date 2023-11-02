
@protocol HUHomeKitObjectPresenting <NSObject>

@required

- (NAFuture *)presentHomeKitObject:(id <HFHomeKitObject>)arg1 destination:(unsigned long long)arg2 animated:(bool)arg3;

@optional

- (NAFuture *)presentCameraProfile:(id <HFHomeKitObject>)arg1 forCameraClip:(HMCameraClip *)arg2 animated:(bool)arg3;
- (NAFuture *)presentCameraProfile:(id <HFHomeKitObject>)arg1 startDate:(NSDate *)arg2 endDate:(NSDate *)arg3 animated:(bool)arg4;
- (NAFuture *)presentFeedbackFlowForCameraClip:(HMCameraClip *)arg1 fromProfile:(HMCameraProfile *)arg2;
- (NAFuture *)presentItemWithUUID:(NSUUID *)arg1 destination:(unsigned long long)arg2 secondaryDestination:(unsigned long long)arg3 animated:(bool)arg4;
- (NAFuture *)presentStatusDetailsForStatusItemClass:(Class)arg1 animated:(bool)arg2;

@end
