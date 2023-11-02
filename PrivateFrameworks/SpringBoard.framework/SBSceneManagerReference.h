
@interface SBSceneManagerReference : NSObject <BSDebugDescriptionProviding> {
    <SBSceneManagerReferenceDelegate> * _delegate;
    FBSDisplayIdentity * _displayIdentity;
    bool  _displayIsConnected;
    bool  _invalidated;
    SBSceneManager * _manager;
    bool  _managerWasValid;
    NSMutableSet * _retainingScenes;
    SBSceneManager * _weak_manager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FBSDisplayIdentity *displayIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_autoreleaseManager:(id)arg1;
- (void)_updateRetainWithBlock:(id /* block */)arg1;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)displayIdentity;
- (id)initWithDisplayIdentity:(id)arg1;
- (void)invalidate;
- (bool)isDefunct;
- (bool)isRetaining;
- (id)manager;
- (void)releaseForScene:(id)arg1;
- (void)retainForScene:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayIdentity:(id)arg1;
- (void)setDisplayIsConnected:(bool)arg1;
- (void)setManager:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
