
@interface STContentPrivacyViewModelCoordinator : NSObject <NSFetchedResultsControllerDelegate, STContentPrivacyViewModelCoordinator> {
    NSMutableDictionary * _configurationPayloadsByType;
    NSArray * _fetchedResultsControllers;
    bool  _isLocalDevice;
    unsigned long long  _numExpectedChanges;
    <STPersistenceControllerProtocol> * _persistenceController;
    NSNumber * _userDSID;
    NSString * _userName;
    NSManagedObjectID * _userObjectID;
    STContentPrivacyViewModel * _viewModel;
}

@property (nonatomic, retain) NSMutableDictionary *configurationPayloadsByType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *fetchedResultsControllers;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLocalDevice;
@property unsigned long long numExpectedChanges;
@property (nonatomic, readonly) <STPersistenceControllerProtocol> *persistenceController;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *userDSID;
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSManagedObjectID *userObjectID;
@property (nonatomic, retain) STContentPrivacyViewModel *viewModel;

+ (id)_coreAnalyticsEventWithRestrictionsEnabled:(bool)arg1 valuesByRestriction:(id)arg2 userType:(unsigned long long)arg3 userIsManaged:(bool)arg4;
+ (id)_localDeviceRestrictions;
+ (id)_remoteDeviceRestrictions;

- (void).cxx_destruct;
- (void)_contactStoreDidChange:(id)arg1;
- (id)_createUnrestrictedConfigurationForUser:(id)arg1 withType:(id)arg2;
- (void)_registerForPersistentStoreNotifications;
- (void)_reportCoreAnalyticsEventForChangedCommunicationLimits:(id)arg1 userType:(unsigned long long)arg2 userIsRemote:(bool)arg3;
- (void)_reportCoreAnalyticsEventWithRestrictionsEnabled:(bool)arg1 valuesByRestriction:(id)arg2 userType:(unsigned long long)arg3 userIsManaged:(bool)arg4;
- (id)_restrictionsForWebFilterState:(unsigned long long)arg1;
- (void)_setValue:(id)arg1 forMCFeature:(id)arg2;
- (void)_setValue:(id)arg1 forSBCapability:(id)arg2;
- (void)_updateConfiguration:(id)arg1 keyPath:(id)arg2 value:(id)arg3;
- (id)_valueForMCFeature:(id)arg1;
- (id)_valueForSBCapability:(id)arg1;
- (id)_valueForWebFilterState;
- (id)_valueInConfiguration:(id)arg1 keyPath:(id)arg2;
- (id)_valuesByRestriction;
- (id)_visibleRestrictions;
- (id)configurationPayloadsByType;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (id)createValuesForRestrictions:(id)arg1 multiplayerRestriction:(id)arg2;
- (id)fetchedResultsControllers;
- (id)initWithPersistenceController:(id)arg1 userDSID:(id)arg2 userName:(id)arg3;
- (bool)isLocalDevice;
- (void)loadValuesByRestrictionWithCompletionHandler:(id /* block */)arg1;
- (void)loadViewModelWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)numExpectedChanges;
- (id)persistenceController;
- (void)reloadViewModelForRemoteChanges;
- (void)saveCommunicationLimits:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveContentPrivacyEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)saveRestrictionValue:(id)arg1 forItem:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)saveValuesForRestrictions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setConfigurationPayloadsByType:(id)arg1;
- (void)setFetchedResultsControllers:(id)arg1;
- (void)setIsLocalDevice:(bool)arg1;
- (void)setNumExpectedChanges:(unsigned long long)arg1;
- (void)setUserDSID:(id)arg1;
- (void)setUserName:(id)arg1;
- (void)setUserObjectID:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)userDSID;
- (id)userName;
- (id)userObjectID;
- (id)valueForRestriction:(id)arg1;
- (id)viewModel;

@end
