
@interface SBSystemApertureSceneHoster : NSObject <BSInvalidatable, SBSSystemApertureSceneCreationRequestServerDelegate> {
    NSMapTable * _activeElements;
    NSMutableSet * _pendingElements;
    SBSSystemApertureSceneCreationRequestServer * _server;
    SBSystemApertureController * _systemApertureController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBSSystemApertureSceneCreationRequestServer *server;
@property (readonly) Class superclass;
@property (nonatomic) SBSystemApertureController *systemApertureController;

- (void).cxx_destruct;
- (void)_addPendingElement:(id)arg1;
- (void)_enumerateElementsUsingBlock:(id /* block */)arg1;
- (void)_invalidateElement:(id)arg1;
- (void)_registerElement:(id)arg1;
- (void)_removeElement:(id)arg1;
- (void)_removePendingElement:(id)arg1;
- (void)activateWithSystemApertureController:(id)arg1;
- (void)invalidate;
- (void)sceneCreationRequestServer:(id)arg1 didReceiveRequestForSystemApertureSceneWithClientIdentity:(id)arg2 requestIdentifier:(id)arg3;
- (id)server;
- (void)setServer:(id)arg1;
- (void)setSystemApertureController:(id)arg1;
- (id)systemApertureController;

@end
