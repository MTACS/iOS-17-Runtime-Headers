
@interface ACUISSystemApertureSceneHandle : NSObject <ActivityUIServices.ActivitySystemApertureSceneHandleDelegate, BSInvalidatable> {
    <ACUISSystemApertureSceneHandleDelegate> * _delegate;
    ACActivityDescriptor * _descriptor;
    _TtC18ActivityUIServices33ActivitySystemApertureSceneHandle * _handle;
    FBScene * _scene;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ACUISSystemApertureSceneHandleDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) ACActivityDescriptor *descriptor;
@property (nonatomic, retain) _TtC18ActivityUIServices33ActivitySystemApertureSceneHandle *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBScene *scene;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activitySystemApertureWithSceneHandle:(id)arg1 requestsLaunchWithAction:(id)arg2;
- (void)activitySystemApertureWithSceneHandle:(id)arg1 updatedContentPayloadID:(id)arg2;
- (id)delegate;
- (id)descriptor;
- (id)handle;
- (id)initWithActivitySystemApertureSceneHandle:(id)arg1;
- (id)initWithDescriptor:(id)arg1 metricsRequest:(id)arg2;
- (void)invalidate;
- (id)scene;
- (void)setDelegate:(id)arg1;
- (void)setHandle:(id)arg1;

@end
