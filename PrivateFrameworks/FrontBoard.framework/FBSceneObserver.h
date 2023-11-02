
@interface FBSceneObserver : NSObject <BSDescriptionProviding, FBSceneComponent, FBSceneDelegate, FBSceneObserver> {
    <FBSceneComponent> * _component;
    struct { 
        bool willUpdateSettings; 
    }  _componentFlags;
    struct { 
        bool willUpdateScene; 
        bool didReceiveActions; 
        bool didDeactivateWithError; 
    }  _delegateFlags;
    bool  _isDelegate;
    <FBSceneObserver> * _observer;
    unsigned long long  _observerAddress;
    Class  _observerClass;
    struct { 
        bool contentStateDidChange; 
        bool updatePrepared; 
        bool updateApplied; 
        bool updateCompleted; 
        bool clientSettingsUpdated; 
        bool didActivate; 
        bool willDeactivateWithError; 
        bool didInvalidate; 
        bool clientDidConnect; 
        bool handleActions; 
    }  _observerFlags;
}

@property (nonatomic, readonly) <FBSceneComponent> *component;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <FBSceneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <FBSceneObserver> *observer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithObserver:(id)arg1;
- (id)component;
- (void)configureInitialSettings:(id)arg1;
- (id)delegate;
- (bool)delegateHandlesActions;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)initWithComponent:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithObserver:(id)arg1;
- (id)initWithScene:(id)arg1;
- (void)invalidate;
- (bool)isDelegate;
- (bool)isEqual:(id)arg1;
- (id)observer;
- (void)scene:(id)arg1 clientDidConnect:(id)arg2;
- (void)scene:(id)arg1 didApplyUpdateWithContext:(id)arg2;
- (void)scene:(id)arg1 didCompleteUpdateWithContext:(id)arg2 error:(id)arg3;
- (void)scene:(id)arg1 didPrepareUpdateWithContext:(id)arg2;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (id)scene:(id)arg1 handleActions:(id)arg2;
- (void)scene:(id)arg1 willUpdateSettings:(id)arg2 withTransitionContext:(id)arg3;
- (void)sceneContentStateDidChange:(id)arg1;
- (void)sceneDidActivate:(id)arg1;
- (void)sceneDidDeactivate:(id)arg1 withError:(id)arg2;
- (void)sceneDidInvalidate:(id)arg1;
- (void)sceneWillDeactivate:(id)arg1 withError:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
