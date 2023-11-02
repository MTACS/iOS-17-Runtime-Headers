
@interface PSPointerClientController : NSObject <BSInvalidatable, PSPointerDefaultLaunchingServiceServerToClientInterface, PSPointerDefaultServiceServerToClientInterface> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableSet * _accessQueue_validMatchMoveSources;
    NSMutableSet * _accessQueue_validPortalSourceCollections;
    long long  _clientInteractionState;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    <PSPointerClientControllerDelegate> * _delegate;
    bool  _hasActivatedLaunchingConnection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _invalidationAndConfigurationLock;
    bool  _isConnectionActive;
    BSServiceConnection * _launchingConnection;
    BSServiceConnection * _nonLaunchingConnection;
    NSCountedSet * _persistentPointerHideReasons;
    NSCountedSet * _persistentPointerShowReasons;
    long long  _pointerVisibilityState;
    NSMutableArray * _serviceKeepAliveAssertions;
    <BSInvalidatable> * _systemPointerInteractionContextIDAssertion;
    NSMutableDictionary * _systemPointerInteractionContextIDs;
}

@property (getter=isClientInteractionEnabled, nonatomic, readonly) bool clientInteractionEnabled;
@property (nonatomic, readonly) long long clientInteractionState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PSPointerClientControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long pointerVisibilityState;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *systemPointerInteractionContextIDs;

- (void).cxx_destruct;
- (id)_accessQueue_acquireServiceKeepAliveAssertion;
- (void)_connectionQueue_handleLaunchingConnectionInterruption;
- (void)_connectionQueue_handleNonLaunchingConnectionActivation;
- (void)_connectionQueue_handleNonLaunchingConnectionInterruption;
- (id)_connectionQueue_launchingConnection;
- (void)_createContentMatchMoveSourcesForDisplay:(id)arg1 count:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_createPointerPortalSourceCollectionForDisplay:(id)arg1 completion:(id /* block */)arg2;
- (void)_main_notifyDelegateOfInvalidatedRemoteSourcesSpecificallyThesePortalSourceCollections:(id)arg1 matchMoveSources:(id)arg2;
- (id)acquireServiceKeepAliveAssertion;
- (oneway void)adjustedDecelerationTargetPointerPosition:(id)arg1 velocity:(id)arg2 inContextID:(id)arg3 cursorRegionLookupRadius:(id)arg4 cursorRegionLookupResolution:(id)arg5 lookupConeAngle:(id)arg6 completion:(id /* block */)arg7;
- (void)autohidePointerForReason:(unsigned long long)arg1;
- (long long)clientInteractionState;
- (oneway void)clientInteractionStateDidChange:(id)arg1;
- (void)createContentMatchMoveSourcesForDisplayUUID:(id)arg1 count:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)createContentMatchMoveSourcesWithCount:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)createPointerPortalSourceCollectionForDisplayUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)createPointerPortalSourceCollectionWithCompletion:(id /* block */)arg1;
- (id)delegate;
- (id)init;
- (void)invalidate;
- (void)invalidateContentMatchMoveSources:(id)arg1 completion:(id /* block */)arg2;
- (void)invalidatePointerPortalSourceCollection:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)invalidatedPortalSourceCollections:(id)arg1 matchMoveSources:(id)arg2;
- (bool)isClientInteractionEnabled;
- (id)persistentlyHidePointerAssertionForReason:(unsigned long long)arg1;
- (id)persistentlyShowPointerAssertionForReason:(unsigned long long)arg1;
- (long long)pointerVisibilityState;
- (oneway void)pointerVisibilityStateDidChange:(id)arg1;
- (void)setActiveHoverRegion:(id)arg1 transitionCompletion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setSystemCursorInteractionContextID:(unsigned int)arg1;
- (id)setSystemPointerInteractionContextID:(unsigned int)arg1 displayUUID:(id)arg2;
- (void)setSystemPointerInteractionContextIDs:(id)arg1;
- (void)sharedInit;
- (id)systemPointerInteractionContextIDs;

@end
