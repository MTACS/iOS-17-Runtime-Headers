
@interface EXBDisplayProfile : NSObject <BSDescriptionStreamable, EXBDisplayControllerProviding, EXBSceneHostingDisplayControllerProviderDelegate> {
    unsigned long long  _deactivationReasonsWhenActive;
    <EXBDisplayProfileDelegate> * _delegate;
    EXBDisplayTransformDescriptor * _descriptor;
    unsigned long long  _priorityLevel;
    <EXBDisplayControllerProviding> * _provider;
}

@property (nonatomic, readonly) unsigned long long deactivationReasonsWhenActive;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <EXBDisplayProfileDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long priorityLevel;
@property (readonly) Class superclass;

+ (id)mirroringMainDisplayProfileWithDelegate:(id)arg1;
+ (id)sceneHostingProfileWithDelegate:(id)arg1 builder:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (unsigned long long)deactivationReasonsWhenActive;
- (id)delegate;
- (id)description;
- (id)displayControllerForDisplay:(id)arg1 configuration:(id)arg2;
- (bool)evaluatePhysicalDisplay:(id)arg1;
- (id)initWithPriority:(unsigned long long)arg1 deactivationReasonsWhenActive:(unsigned long long)arg2 descriptor:(id)arg3 provider:(id)arg4 delegate:(id)arg5;
- (unsigned long long)priorityLevel;
- (id)provider:(id)arg1 initialDisplayConfigurationRequestForDisplay:(id)arg2;
- (void)provider:(id)arg1 modifyInitialSceneParameters:(id)arg2;
- (id)provider:(id)arg1 rootSceneWindowForDisplayConfiguration:(id)arg2;
- (bool)shouldTransformConnectingDisplays;
- (void)transformPhysicalDisplayWithBuilder:(id)arg1;
- (bool)usesRootDisplay;

@end
