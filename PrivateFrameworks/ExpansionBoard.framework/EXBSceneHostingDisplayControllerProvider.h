
@interface EXBSceneHostingDisplayControllerProvider : NSObject <BSDescriptionStreamable, EXBDisplayControllerProviding, EXBSceneHostingDisplayControllerDelegate> {
    <EXBSceneHostingDisplayControllerProviderDelegate> * _delegate;
    EXBDisplayTransformDescriptor * _descriptor;
    unsigned long long  _priorityLevel;
    FBSSceneSpecification * _sceneSpecification;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EXBSceneHostingDisplayControllerProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)controller:(id)arg1 initialDisplayConfigurationRequestForDisplay:(id)arg2;
- (void)controller:(id)arg1 modifyInitialSceneParameters:(id)arg2;
- (id)controller:(id)arg1 rootSceneWindowForDisplayConfiguration:(id)arg2;
- (id)delegate;
- (id)description;
- (id)displayControllerForDisplay:(id)arg1 configuration:(id)arg2;
- (unsigned long long)hash;
- (id)initWithPriority:(unsigned long long)arg1 descriptor:(id)arg2 sceneSpecification:(id)arg3;
- (bool)isEqual:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
