
@interface SBDisplayManager : NSObject <FBSDisplayObserving, SBDisplayAssertionCoordinatorDelegate> {
    SBDisplayAssertionCoordinator * _assertionCoordinator;
    NSMutableDictionary * _connectedIdentityToRecordMap;
    NSMapTable * _controllerToAssertionMap;
    NSString * _disableIdleSleepReason;
    FBDisplayManager * _displayManager;
    NSHashTable * _factories;
    NSMutableDictionary * _identityToControllerMap;
    NSMutableDictionary * _identityToWindowingModeMap;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _lock_observers;
    SBDisplayPowerLogReporter * _powerLogReporter;
    NSMutableDictionary * _rootIdentityToCADisplayQueueMap;
    NSMutableDictionary * _rootIdentityToCloneMirroringMode;
    NSMutableDictionary * _rootIdentityToCloneMirroringModeTokens;
    NSMutableDictionary * _rootIdentityToDisableSleepReasons;
    NSMutableDictionary * _rootIdentityToDisplayArrangementItems;
    NSMutableDictionary * _rootIdentityToLayoutPublisherMap;
    SBSceneManagerCoordinator * _sceneManagerCoordinator;
}

@property (nonatomic, readonly, copy) NSArray *connectedIdentities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) FBSDisplayIdentity *mainIdentity;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_connectControllerWithInfo:(id)arg1 toDisplay:(id)arg2 configuration:(id)arg3;
- (void)_connectToIdentity:(id)arg1 withConfiguration:(id)arg2 forDisplayManagerInit:(bool)arg3;
- (id)_createAndActivateLayoutPublisherForConnectingDisplay:(id)arg1;
- (void)_deactivateLayoutPublisher:(id)arg1 forDisconnectingDisplay:(id)arg2;
- (void)_setCloneMirroringMode:(unsigned long long)arg1 forDisplay:(id)arg2;
- (void)_setDisableIdleSleepReason:(id)arg1 forDisplay:(id)arg2;
- (void)_setDisplayArrangementItem:(id)arg1 forDisplay:(id)arg2;
- (void)_setPowerLogEntry:(id)arg1 forDisplay:(id)arg2;
- (id)_signpostMetadataForController:(id)arg1;
- (id)addObserver:(id)arg1;
- (void)assertionCoordinator:(id)arg1 updatedAssertionPreferences:(id)arg2 oldPreferences:(id)arg3 forDisplay:(id)arg4;
- (void)beginMonitoringForExternalDisplays:(id /* block */)arg1;
- (id)configurationForIdentity:(id)arg1;
- (id)connectedIdentities;
- (void)dealloc;
- (void)displayMonitor:(id)arg1 didConnectIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3;
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;
- (id)initWithDisplayManager:(id)arg1 sceneManagerCoordinator:(id)arg2 assertionCoordinator:(id)arg3 powerLogReporter:(id)arg4;
- (id)layoutPublisherForDisplay:(id)arg1;
- (id)mainIdentity;
- (void)registerDisplayControllerProvider:(id)arg1;
- (void)updateTransformsWithCompletion:(id /* block */)arg1;
- (long long)windowingModeForDisplay:(id)arg1;

@end
