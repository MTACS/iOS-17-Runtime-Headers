
@interface CPSTemplateEnvironment : NSObject <CPUINowPlayingObserving> {
    NSSet * _allowedTemplateClasses;
    NSString * _bundleIdentifier;
    bool  _canBecomeNowPlayingApp;
    NSXPCConnection * _connection;
    CARObserverHashTable * _environmentObservers;
    bool  _hasAudioEntitlement;
    bool  _hasChargingEntitlement;
    bool  _hasCommunicationEntitlement;
    bool  _hasDrivingTaskEntitlement;
    bool  _hasFuelingEntitlement;
    bool  _hasNavigationEntitlement;
    bool  _hasParkingEntitlement;
    bool  _hasPublicSafetyEntitlement;
    bool  _hasQuickOrderingEntitlement;
    bool  _isNowPlayingApp;
    bool  _isUserApplication;
    CARSessionStatus * _sessionStatus;
    bool  _supportsInstrumentCluster;
    <CPTemplateProviding> * _templateProvider;
}

@property (nonatomic, readonly) NSSet *allowedTemplateClasses;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) bool canBecomeNowPlayingApp;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CARObserverHashTable *environmentObservers;
@property (nonatomic, readonly) bool hasAnyTemplateEntitlement;
@property (nonatomic, readonly) bool hasAudioEntitlement;
@property (nonatomic, readonly) bool hasChargingEntitlement;
@property (nonatomic, readonly) bool hasCommunicationEntitlement;
@property (nonatomic, readonly) bool hasDrivingTaskEntitlement;
@property (nonatomic, readonly) bool hasFuelingEntitlement;
@property (nonatomic, readonly) bool hasNavigationEntitlement;
@property (nonatomic, readonly) bool hasParkingEntitlement;
@property (nonatomic, readonly) bool hasPublicSafetyEntitlement;
@property (nonatomic, readonly) bool hasQuickOrderingEntitlement;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isNowPlayingApp;
@property (nonatomic, readonly) bool isUserApplication;
@property (nonatomic, readonly) unsigned long long maximumClientHierarchyDepth;
@property (nonatomic, readonly) unsigned long long maximumTabs;
@property (nonatomic, readonly) bool rightHandDrive;
@property (nonatomic, readonly) CARSessionStatus *sessionStatus;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsInstrumentCluster;
@property (nonatomic, readonly) <CPTemplateProviding> *templateProvider;

- (void).cxx_destruct;
- (bool)_applicationRecord:(id)arg1 supportsIntentWithIdentifier:(id)arg2 error:(id*)arg3;
- (bool)_applicationRecord:(id)arg1 supportsIntentWithIdentifierInExtensions:(id)arg2 error:(id*)arg3;
- (void)addTemplateEnvironmentDelegate:(id)arg1;
- (id)allowedTemplateClasses;
- (bool)applicationSupportsIntentWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)bundleIdentifier;
- (bool)canBecomeNowPlayingApp;
- (id)connection;
- (id)environmentObservers;
- (bool)hasAnyTemplateEntitlement;
- (bool)hasAudioEntitlement;
- (bool)hasChargingEntitlement;
- (bool)hasCommunicationEntitlement;
- (bool)hasDrivingTaskEntitlement;
- (bool)hasFuelingEntitlement;
- (bool)hasNavigationEntitlement;
- (bool)hasParkingEntitlement;
- (bool)hasPublicSafetyEntitlement;
- (bool)hasQuickOrderingEntitlement;
- (id)initWithConnection:(id)arg1 templateProvider:(id)arg2;
- (bool)isNowPlayingApp;
- (bool)isUserApplication;
- (unsigned long long)maximumClientHierarchyDepth;
- (unsigned long long)maximumTabs;
- (void)nowPlayingManager:(id)arg1 didUpdateSnapshot:(id)arg2;
- (bool)rightHandDrive;
- (id)sessionStatus;
- (void)setEnvironmentObservers:(id)arg1;
- (bool)supportsInstrumentCluster;
- (id)templateProvider;

@end
