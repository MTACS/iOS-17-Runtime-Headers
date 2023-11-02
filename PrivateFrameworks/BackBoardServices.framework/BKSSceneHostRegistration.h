
@interface BKSSceneHostRegistration : NSObject <BSDescriptionStreamable, BSInvalidatable> {
    unsigned int  _contextID;
    BKSSceneHostSettings * _sceneHostSettings;
    BKSTouchEventService * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)description;
- (void)invalidate;
- (void)updateSettings:(id)arg1;

@end
