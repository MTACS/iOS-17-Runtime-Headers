
@interface XBApplicationCaptureInformation : NSObject <BSDescriptionProviding> {
    NSArray * _captureInfos;
    NSArray * _launchImagePaths;
    NSOrderedSet * _launchRequests;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSOrderedSet *launchRequests;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)caarPathForLaunchRequest:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)estimatedMemoryImpactForLaunchRequest:(id)arg1;
- (id)initWithLaunchRequests:(id)arg1 captureInfos:(id)arg2 launchImagePaths:(id)arg3;
- (id)launchImagePathForLaunchRequest:(id)arg1;
- (id)launchRequests;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
