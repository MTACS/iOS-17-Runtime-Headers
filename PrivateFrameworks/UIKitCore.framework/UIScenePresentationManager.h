
@interface UIScenePresentationManager : NSObject <BSDescriptionProviding, FBSceneObserver, _UIScenePresenterOwnerDelegate> {
    UIScenePresentationContext * _defaultScenePresentationContext;
    <UIScenePresentationManagerDelegate> * _delegate;
    struct { 
        bool defaultPriorityBand; 
    }  _delegateFlags;
    bool  _invalidated;
    _UISceneKeyboardProxyLayerForwardingPresentationScene * _keyboardProxyPresentationEnvironment;
    NSMapTable * _mapLayersToPresenterOwners;
    FBScene * _scene;
    _UIScenePresenterOwner * _scenePresenterOwner;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) UIScenePresentationContext *defaultPresentationContext;
@property (nonatomic) <UIScenePresentationManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (nonatomic, readonly) FBScene *scene;
@property (readonly) Class superclass;

+ (id)sceneHostingGraph;

- (void).cxx_destruct;
- (long long)_defaultPresentationPriority;
- (bool)_hasPresenterWithIdentifier:(id)arg1;
- (id)_initWithScene:(id)arg1;
- (id)_initWithScene:(id)arg1 keyboardProxyLayerManager:(id)arg2 keyboardProxyPresentationEnvironment:(id)arg3;
- (id)_presenterWithIdentifier:(id)arg1;
- (id)createPresenterForLayerTarget:(id)arg1 identifier:(id)arg2;
- (id)createPresenterForLayerTarget:(id)arg1 identifier:(id)arg2 priority:(long long)arg3;
- (id)createPresenterWithIdentifier:(id)arg1;
- (id)createPresenterWithIdentifier:(id)arg1 priority:(long long)arg2;
- (id)defaultPresentationContext;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (bool)isInvalidated;
- (void)modifyDefaultPresentationContext:(id /* block */)arg1;
- (void)owner:(id)arg1 willPrioritizePresenter:(id)arg2 deactivatePresenter:(id)arg3;
- (void)ownerDidInvalidateLastPresenter:(id)arg1;
- (id)scene;
- (void)sceneContentStateDidChange:(id)arg1;
- (void)sceneDidInvalidate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)snapshotContext;
- (id)snapshotPresentationForSnapshot:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
