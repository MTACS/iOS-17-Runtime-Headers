
@interface _EXSceneHostView : UIView {
    _EXExtensionProcessHandle * _extensionProcess;
    NSString * _role;
    FBScene * _scene;
    <UIScenePresenter> * _scenePresenter;
    NSUUID * _sessionUUID;
}

@property (nonatomic, retain) _EXExtensionProcessHandle *extensionProcess;
@property (nonatomic, readonly) NSString *role;
@property (nonatomic, retain) FBScene *scene;
@property (nonatomic, retain) <UIScenePresenter> *scenePresenter;
@property (nonatomic, retain) NSUUID *sessionUUID;

- (void).cxx_destruct;
- (void)creatScene;
- (id)extensionProcess;
- (id)initWithExtensionProcess:(id)arg1 sessionUUID:(id)arg2 role:(id)arg3;
- (void)layoutSubviews;
- (id)role;
- (id)scene;
- (id)scenePresenter;
- (id)sessionUUID;
- (void)setExtensionProcess:(id)arg1;
- (void)setScene:(id)arg1;
- (void)setScenePresenter:(id)arg1;
- (void)setSessionUUID:(id)arg1;

@end
