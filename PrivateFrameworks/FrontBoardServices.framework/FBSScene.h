
@interface FBSScene : NSObject <BSDescriptionProviding, FBSSceneAgentProxy, FBSSceneExtensible, FBSSceneHandle, FBSSceneSnapshotRequestDelegate, FBSSceneUpdaterDelegate> {
    FBSSerialQueue * _callOutQueue;
    <FBSSceneClientAgent> * _callOutQueue_agent;
    bool  _callOutQueue_agentInvalidateCalled;
    id /* block */  _callOutQueue_agentMessageHandler;
    NSMutableArray * _callOutQueue_agentSessions;
    bool  _callOutQueue_mutationLocked;
    FBSSceneDefinition * _definition;
    bool  _hasAgent;
    FBSSceneIdentity * _identity;
    FBSSceneIdentityToken * _identityToken;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    FBSSceneClientSettings * _lock_clientSettings;
    NSMapTable * _lock_components;
    <FBSSceneDelegate> * _lock_delegate;
    FBSSceneHostHandle * _lock_hostHandle;
    NSMutableArray * _lock_sceneObservers;
    FBSSceneSettings * _lock_settings;
    <FBSSceneUpdater> * _lock_updater;
}

@property (nonatomic, readonly) FBSSceneClientSettings *clientSettings;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) FBSSceneDefinition *definition;
@property (nonatomic) <FBSSceneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BSAuditToken *hostAuditToken;
@property (nonatomic, readonly) FBSSceneHostHandle *hostHandle;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) FBSSceneIdentity *identity;
@property (nonatomic, readonly) FBSSceneIdentityToken *identityToken;
@property (nonatomic, readonly) FBSSceneSettings *settings;
@property (nonatomic, readonly) FBSSceneSpecification *specification;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

- (void).cxx_destruct;
- (void)_callOutQueue_didCreateWithTransitionContext:(id)arg1 completion:(id /* block */)arg2;
- (void)_callOutQueue_didUpdateHostHandle:(id)arg1;
- (void)_callOutQueue_invalidate;
- (void)_callOutQueue_invalidateAgent;
- (void)_callOutQueue_updateExtensionsFromSettings:(id)arg1 toSettings:(id)arg2 withDiff:(id)arg3;
- (void)_callOutQueue_willDestroyWithTransitionContext:(id)arg1 completion:(id /* block */)arg2;
- (id)_createTransitionContext;
- (bool)_hasAgent;
- (id)_initWithUpdater:(id)arg1 identityToken:(id)arg2 identity:(id)arg3 specification:(id)arg4 settings:(id)arg5 initialClientSettings:(id)arg6 hostHandle:(id)arg7;
- (id)_lock_allComponents;
- (id)_observers;
- (void)_updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)addObserver:(id)arg1 withConfiguration:(id /* block */)arg2;
- (void)agent:(id)arg1 registerMessageHandler:(id /* block */)arg2;
- (void)agent:(id)arg1 sendMessage:(id)arg2 withResponse:(id /* block */)arg3;
- (void)attachContext:(id)arg1;
- (void)attachLayer:(id)arg1;
- (void)attachSceneContext:(id)arg1;
- (id)callOutQueue;
- (id)clientProcess;
- (id)clientSettings;
- (void)closeSession:(id)arg1;
- (id)componentForExtension:(Class)arg1 ofClass:(Class)arg2;
- (bool)conformsToExtension:(Class)arg1;
- (id)contexts;
- (id)counterpartAgent;
- (id)definition;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)detachContext:(id)arg1;
- (void)detachLayer:(id)arg1;
- (void)detachSceneContext:(id)arg1;
- (id)display;
- (id)fbsDisplay;
- (id)hostAuditToken;
- (id)hostHandle;
- (id)hostProcess;
- (id)identifier;
- (id)identity;
- (id)identityToken;
- (id)init;
- (bool)invalidateSnapshotWithContext:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)layers;
- (id)loggingIdentifier;
- (id)openSessionWithName:(id)arg1 executionPolicy:(id)arg2;
- (id)parameters;
- (bool)performSnapshotWithContext:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)sendActions:(id)arg1;
- (void)sendActions:(id)arg1 toExtension:(Class)arg2;
- (void)setDelegate:(id)arg1;
- (id)settings;
- (id)snapshotRequest;
- (bool)snapshotRequest:(id)arg1 performWithContext:(id)arg2;
- (bool)snapshotRequestAllowSnapshot:(id)arg1;
- (id)specification;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateClientSettings:(id /* block */)arg1;
- (void)updateClientSettings:(id)arg1 withTransitionContext:(id)arg2;
- (void)updateClientSettingsWithBlock:(id /* block */)arg1;
- (void)updateClientSettingsWithTransitionBlock:(id /* block */)arg1;
- (void)updater:(id)arg1 didReceiveActions:(id)arg2 forExtension:(Class)arg3;
- (void)updater:(id)arg1 didReceiveMessage:(id)arg2 withResponse:(id /* block */)arg3;
- (void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(id /* block */)arg5;

// Image: /System/Library/PrivateFrameworks/AXFrontBoardUtils.framework/AXFrontBoardUtils

- (bool)accessibilitySceneIsCallServiceBanner;

// Image: /System/Library/PrivateFrameworks/BacklightServices.framework/BacklightServices

- (id)backlightSceneEnvironment;
- (id)backlightSceneEnvironmentWithCreationBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit

- (id)bn_presentableUniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices

- (id)crs_applicationBundleIdentifier;

// Image: /System/Library/PrivateFrameworks/ExpansionBoard.framework/ExpansionBoard

- (id)EXBDisplayEndpoint;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

- (void)pr_performUpdate:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (bool)isPersistable;
- (bool)uiAlwaysSupportsAllInterfaceOrientations;
- (bool)uiCanReceiveDeviceOrientationEvents;
- (id)uiClientSettings;
- (id)uiSettings;
- (void)updateUIClientSettingsWithBlock:(id /* block */)arg1;
- (void)updateUIClientSettingsWithTransitionBlock:(id /* block */)arg1;

@end
