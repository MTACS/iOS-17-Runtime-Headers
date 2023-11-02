
@interface _UIMutableCanvasDefinition : _UICanvasDefinition {
    UISceneSession * _sceneSession;
}

@property (nonatomic, retain) Class canvasSubclass;
@property (nonatomic, retain) Class delegateClass;

- (void).cxx_destruct;
- (Class)canvasSubclass;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (Class)delegateClass;
- (id)initWithRepresentation:(id)arg1;
- (id)persistentIdentifier;
- (id)representedCanvas;
- (id)role;
- (id)scene;
- (void)setCanvasSubclass:(Class)arg1;
- (void)setDelegateClass:(Class)arg1;
- (void)setUserInfo:(id)arg1;
- (id)stateRestorationActivity;
- (long long)systemType;
- (id)userInfo;

@end
