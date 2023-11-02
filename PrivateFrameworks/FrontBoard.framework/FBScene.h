
@interface FBScene : NSObject <BSDescriptionProviding, FBSSceneExtensible, FBSceneHost> {
    unsigned long long  _activationID;
    bool  _active;
    <FBSceneClient> * _client;
    FBSceneClientHandle * _clientHandle;
    FBProcess * _clientProcess;
    <FBSceneClientProviderInternal> * _clientProvider;
    FBSSceneClientSettings * _clientSettings;
    NSMapTable * _components;
    long long  _contentState;
    bool  _contentStateIsChanging;
    FBSSceneDefinition * _definition;
    FBSceneObserver * _delegateProxy;
    bool  _everActivated;
    bool  _finishedInit;
    NSString * _identifier;
    FBSSceneIdentityToken * _identityToken;
    bool  _inTransaction;
    bool  _invalidated;
    unsigned long long  _lastForegroundingTransitionID;
    FBSceneLayerManager * _layerManager;
    bool  _legacy;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableOrderedSet * _lock_observerProxies;
    bool  _midUpdate;
    FBSceneRemnant * _remnant;
    FBSSceneSettings * _settings;
    <BSInvalidatable> * _stateCaptureAssertion;
    unsigned long long  _transactionID;
    FBSceneWorkspace * _workspace;
    NSString * _workspaceIdentifier;
}

@property (nonatomic, readonly) bool _isLegacy;
@property (nonatomic, readonly) unsigned long long _transactionID;
@property (getter=isActive, nonatomic, readonly) bool active;
@property (readonly) BLSHBacklightFBSceneHostEnvironment *backlightSceneHostEnvironment;
@property (nonatomic, readonly) FBSceneClientHandle *clientHandle;
@property (nonatomic, readonly) FBProcess *clientProcess;
@property (nonatomic, readonly) FBSSceneClientSettings *clientSettings;
@property (nonatomic, readonly) long long contentState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) FBSSceneDefinition *definition;
@property (nonatomic) <FBSceneDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) BLSHBacklightFBSceneHostEnvironment *existingBacklightSceneHostEnvironment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) FBSSceneIdentity *identity;
@property (nonatomic, readonly, copy) FBSSceneIdentityToken *identityToken;
@property (nonatomic, readonly) FBSceneLayerManager *layerManager;
@property (nonatomic, readonly, copy) FBSSceneParameters *parameters;
@property (nonatomic, readonly) FBSSceneSettings *settings;
@property (nonatomic, readonly, copy) FBSSceneSpecification *specification;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;
@property (nonatomic, readonly, copy) NSString *workspaceIdentifier;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

- (void).cxx_destruct;
- (id)_createTransitionContext;
- (bool)_isLegacy;
- (unsigned long long)_transactionID;
- (void)activate:(id /* block */)arg1;
- (void)activateWithTransitionContext:(id)arg1;
- (void)activateWithTransitionContext:(id)arg1 completion:(id /* block */)arg2;
- (void)addExtension:(Class)arg1;
- (void)addObserver:(id)arg1;
- (void)client:(id)arg1 didReceiveActions:(id)arg2 forExtension:(Class)arg3;
- (void)client:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;
- (id)clientHandle;
- (id)clientProcess;
- (id)clientSettings;
- (id)componentForExtension:(Class)arg1 ofClass:(Class)arg2;
- (void)configureParameters:(id /* block */)arg1;
- (bool)conformsToExtension:(Class)arg1;
- (long long)contentState;
- (id)createSnapshot;
- (id)createSnapshotWithContext:(id)arg1;
- (long long)currentInterfaceOrientation;
- (void)deactivate:(id /* block */)arg1;
- (void)deactivateWithTransitionContext:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)definition;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)display;
- (id)identifier;
- (id)identity;
- (id)identityToken;
- (void)invalidate;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (bool)isLegacy;
- (bool)isValid;
- (id)layerManager;
- (id)loggingIdentifier;
- (id)parameters;
- (void)performUpdate:(id /* block */)arg1;
- (void)performUpdate:(id /* block */)arg1 withCompletion:(id /* block */)arg2;
- (void)removeObserver:(id)arg1;
- (void)sendActions:(id)arg1;
- (void)sendActions:(id)arg1 toExtension:(Class)arg2;
- (void)setDelegate:(id)arg1;
- (id)settings;
- (id)snapshotContext;
- (id)specification;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)uiClientSettings;
- (id)uiSettings;
- (void)updateSettings:(id /* block */)arg1;
- (void)updateSettings:(id)arg1 withTransitionContext:(id)arg2;
- (void)updateSettings:(id)arg1 withTransitionContext:(id)arg2 completion:(id /* block */)arg3;
- (void)updateSettingsWithBlock:(id /* block */)arg1;
- (void)updateSettingsWithTransitionBlock:(id /* block */)arg1;
- (void)updateUISettingsWithBlock:(id /* block */)arg1;
- (void)updateUISettingsWithTransitionBlock:(id /* block */)arg1;
- (id)workspaceIdentifier;

// Image: /System/Library/PrivateFrameworks/AXFrontBoardUtils.framework/AXFrontBoardUtils

- (bool)accessibilityIsSceneOccluded;
- (bool)accessibilityIsSceneOnCarScreen;
- (bool)accessibilityIsSceneOnExternalScreen;
- (bool)accessibilityIsSceneOnMainScreen;
- (bool)accessibilityIsSceneOnUnknownScreen;
- (bool)accessibilitySceneBelongsToTheSystemApp;
- (id)accessibilitySceneDescription;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilitySceneFrame;
- (id)accessibilitySceneIdentifier;
- (bool)accessibilitySceneIsCallServiceBanner;
- (bool)accessibilitySceneIsDeactivatedBySidebar;
- (bool)accessibilitySceneIsDeactivatedBySwitcher;
- (bool)accessibilitySceneIsDismissedInCallService;
- (bool)accessibilitySceneIsDismissedSearchScreen;
- (bool)accessibilitySceneIsForegroundVisible;
- (bool)accessibilitySceneIsRunningInForeground;
- (bool)accessibilitySceneIsSuspended;
- (double)accessibilitySceneLevel;
- (bool)accessibilitySceneOwnerIsAUIApplication;
- (id)accessibilityScenePID;
- (id)accessibilitySceneProcess;

// Image: /System/Library/PrivateFrameworks/BacklightServicesHost.framework/BacklightServicesHost

- (id)backlightSceneHostEnvironment;
- (id)existingBacklightSceneHostEnvironment;

// Image: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices

- (void)updateClusterSceneSettingsWithBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/PaperBoardUI.framework/PaperBoardUI

- (void)pb_activate:(id /* block */)arg1;
- (void)pb_activate:(id /* block */)arg1 withCompletion:(id /* block */)arg2;
- (void)pb_update:(id /* block */)arg1;
- (void)pb_update:(id /* block */)arg1 withCompletion:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/PosterBoardUI.framework/PosterBoardUI

- (id)_layersToExcludeForOptions:(long long)arg1;
- (long long)_renderingContentForOptions:(long long)arg1;
- (id)prui_createSnapshotWithContext:(id)arg1;
- (void)prui_restoreSceneAfterSnapshottingWithCompletion:(id /* block */)arg1;
- (void)prui_restoreSceneAfterSnapshottingWithUpdater:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)prui_setupSceneForSnapshottingWithOptions:(long long)arg1 traitCollection:(id)arg2 completion:(id /* block */)arg3;
- (void)prui_setupSceneForSnapshottingWithOptions:(long long)arg1 traitCollection:(id)arg2 updater:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)prui_snapshotContextConfiguredWithOptions:(long long)arg1;
- (void)prui_snapshotSceneWithOptions:(long long)arg1 traitCollection:(id)arg2 completion:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/PosterBoardUIServices.framework/PosterBoardUIServices

- (bool)pruis_allowTransparencyForOptions:(long long)arg1;
- (bool)pruis_isFloatingLayerOnlyForOptions:(long long)arg1;
- (id)pruis_layersToExcludeForOptions:(long long)arg1;
- (long long)pruis_renderingContentForOptions:(long long)arg1;
- (void)pruis_restoreSceneAfterSnapshottingWithCompletion:(id /* block */)arg1;
- (void)pruis_setupSceneForSnapshottingWithOptions:(long long)arg1 traitCollection:(id)arg2 completion:(id /* block */)arg3;
- (id)pruis_snapshotContextConfiguredWithOptions:(long long)arg1;
- (void)pruis_updateWithoutActivating:(id /* block */)arg1;
- (void)pruis_updateWithoutActivating:(id /* block */)arg1 withCompletion:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

+ (id)pr_createPosterSceneWithRole:(id)arg1 path:(id)arg2;
+ (id)pr_createPosterSceneWithRole:(id)arg1 path:(id)arg2 provider:(id)arg3;
+ (id)pr_createPosterSceneWithinCurrentProcessForRole:(id)arg1 path:(id)arg2;

- (void)pr_applyPosterPath:(id)arg1 toSettings:(id)arg2;
- (id)pr_buildSnapshotBundleForLevelSets:(id)arg1 determineColorStatistics:(bool)arg2 snapshotDefinitionIdentifier:(id)arg3 error:(out id*)arg4;
- (void)pr_executeSnapshotForLevelSets:(id)arg1 determineColorStatistics:(bool)arg2 snapshotDefinitionIdentifier:(id)arg3 onQueue:(id)arg4 completion:(id /* block */)arg5;
- (void)pr_invalidateWithCompletion:(id /* block */)arg1;
- (bool)pr_isLegacyProvider;
- (void)pr_postSignificantEvent:(unsigned long long)arg1;
- (void)pr_postUserTapEventWithLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)pr_posterComponent;
- (id)pr_posterPath;
- (bool)pr_sceneIsReadyToSnapshot:(out id*)arg1;
- (void)pr_setPosterComponent:(id)arg1;
- (void)pr_setPosterPath:(id)arg1;
- (void)pr_setShortDescription:(id)arg1;
- (id)pr_shortDescription;
- (id)pr_snapshotContextConfiguredForLevelSet:(id)arg1;
- (void)pr_updateWithPath:(id)arg1 inSettings:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (bool)sb_isSpringBoardRootScene;

@end
