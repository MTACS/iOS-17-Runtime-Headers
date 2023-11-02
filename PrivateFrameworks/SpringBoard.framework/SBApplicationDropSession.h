
@interface SBApplicationDropSession : NSObject {
    SBActivationSettings * _activationSettings;
    NSObject<OS_dispatch_group> * _activationSettingsGroup;
    SBApplication * _application;
    NSSet * _launchActions;
    SBSAppDragLocalContext * _localContext;
    bool  _notificationDrag;
    FBSSceneIdentity * _sceneIdentity;
    UIDraggingSystemSession * _systemSession;
    NSString * _targetContentIdentifier;
    <UIDragDropSession> * _uiDragDropSession;
    bool  _windowTearOff;
}

@property (nonatomic, readonly) SBActivationSettings *activationSettings;
@property (nonatomic, readonly) SBApplication *application;
@property (nonatomic, readonly) long long dropZones;
@property (nonatomic, readonly) NSSet *launchActions;
@property (nonatomic, readonly) SBSAppDragLocalContext *localContext;
@property (getter=isNotificationDrag, nonatomic, readonly) bool notificationDrag;
@property (nonatomic, retain) FBSSceneIdentity *sceneIdentity;
@property (nonatomic, readonly) UIDraggingSystemSession *systemSession;
@property (nonatomic, copy) NSString *targetContentIdentifier;
@property (nonatomic, readonly) <UIDragDropSession> *uiDragDropSession;
@property (getter=isWindowTearOff, nonatomic, readonly) bool windowTearOff;

+ (id)_applicationForHandlingDragItem:(id)arg1 URL:(id)arg2 error:(id*)arg3;
+ (id)_applicationForIconLeafIdentifier:(id)arg1;
+ (id)_applicationProxyForIdentifiers:(id)arg1 forURL:(id)arg2 passingTest:(id /* block */)arg3 error:(id*)arg4;
+ (bool)_dragItemRepresentsAcceptableFileDrag:(id)arg1;
+ (void)_getFileDropSessionWithUIDragDropSession:(id)arg1 dragItem:(id)arg2 systemSession:(id)arg3 targetApplication:(id)arg4 completion:(id /* block */)arg5;
+ (void)_getLocalAppDropSessionWithUIDragDropSession:(id)arg1 dragItem:(id)arg2 systemSession:(id)arg3 completion:(id /* block */)arg4;
+ (void)_getURLDropSessionWithUIDragDropSession:(id)arg1 dragItem:(id)arg2 systemSession:(id)arg3 targetApplication:(id)arg4 completion:(id /* block */)arg5;
+ (void)_getUserActivityDropSessionWithUIDragDropSession:(id)arg1 dragItem:(id)arg2 systemSession:(id)arg3 targetApplication:(id)arg4 completion:(id /* block */)arg5;
+ (void)_getUserNotificationDropSessionWithUIDragDropSession:(id)arg1 systemSession:(id)arg2 dragItem:(id)arg3 completion:(id /* block */)arg4;
+ (bool)_itemProviderRequiresOpenInPlace:(id)arg1;
+ (bool)canHandleUIDragDropSession:(id)arg1;
+ (id)dropSessionWithWindowUIDragSession:(id)arg1;
+ (void)getDropSessionWithUIDropSession:(id)arg1 sceneProvider:(id)arg2 defaultToSourceApplication:(bool)arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)_activityContinuationActionFromActivity:(id)arg1 activityData:(id)arg2;
- (id)_initWithUIDragDropSession:(id)arg1 application:(id)arg2 targetContentIdentifier:(id)arg3;
- (bool)_isApplicationBoundToVisibleIcon;
- (id)activationSettings;
- (id)application;
- (void)calculateSceneIdentityWithSceneProvider:(id)arg1 completion:(id /* block */)arg2;
- (long long)dropZones;
- (id)initWithUIDragDropSession:(id)arg1 systemSession:(id)arg2 application:(id)arg3 activity:(id)arg4 activityData:(id)arg5;
- (id)initWithUIDragDropSession:(id)arg1 systemSession:(id)arg2 application:(id)arg3 targetContentIdentifier:(id)arg4;
- (id)initWithUIDragDropSession:(id)arg1 systemSession:(id)arg2 application:(id)arg3 targetContentIdentifier:(id)arg4 URL:(id)arg5 requiresOpenInPlace:(bool)arg6;
- (id)initWithUIDragDropSession:(id)arg1 systemSession:(id)arg2 application:(id)arg3 targetContentIdentifier:(id)arg4 localContext:(id)arg5 activity:(id)arg6 activityData:(id)arg7;
- (bool)isNotificationDrag;
- (bool)isWindowTearOff;
- (id)launchActions;
- (id)localContext;
- (id)sceneIdentity;
- (void)setSceneIdentity:(id)arg1;
- (void)setTargetContentIdentifier:(id)arg1;
- (id)systemSession;
- (id)targetContentIdentifier;
- (id)uiDragDropSession;

@end
