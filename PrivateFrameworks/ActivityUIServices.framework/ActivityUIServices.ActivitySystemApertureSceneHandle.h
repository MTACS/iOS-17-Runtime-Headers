
@interface ActivityUIServices.ActivitySystemApertureSceneHandle : NSObject <BSInvalidatable, FBSceneDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  activityDescriptor;
    void backOffTimer;
    void currentContentPayloadID;
    void delegate;
    void descriptor;
    void invalidated;
    void logIdentifier;
    void processResource;
    void scene;
    void settingsDiffInspector;
    void systemMetricsRequest;
}

@property (nonatomic) <_TtP18ActivityUIServices41ActivitySystemApertureSceneHandleDelegate_> *delegate;
@property (nonatomic, retain) ACActivityDescriptor *descriptor;
@property (nonatomic, retain) FBScene *scene;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)descriptor;
- (id)init;
- (id)initWithAcActivityDescritor:(id)arg1 systemMetricsRequest:(id)arg2;
- (void)invalidate;
- (id)scene;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneDidActivate:(id)arg1;
- (void)sceneDidDeactivate:(id)arg1 withError:(id)arg2;
- (void)sceneDidInvalidate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setScene:(id)arg1;

@end
