
@interface BLSHAssertionPausingSceneObserver : NSObject <BLSHLocalAssertionAttributeHandlerEntry, FBSceneObserver> {
    <BLSAssertionServiceResponding> * _assertion;
    BLSPauseWhenSceneBackgroundAttribute * _attribute;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _paused;
    FBScene * _scene;
    <BLSHAssertionAttributeHandlerService> * _service;
}

@property (nonatomic, readonly) <BLSAssertionServiceResponding> *assertion;
@property (nonatomic, readonly) BLSPauseWhenSceneBackgroundAttribute *attribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <BLSHAssertionAttributeHandlerService> *service;
@property (readonly) Class superclass;

+ (id)activateForAttribute:(id)arg1 fromAssertion:(id)arg2 forService:(id)arg3 attributeHandler:(id)arg4;

- (void).cxx_destruct;
- (id)assertion;
- (id)attribute;
- (void)dealloc;
- (void)invalidate;
- (bool)reactivateIfPossible;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneDidInvalidate:(id)arg1;
- (id)service;

@end
