
@interface STCommunicationSafetyViewModelCoordinator : NSObject <STCommunicationSafetyViewModelCoordinator, STGroupFetchedResultsControllerDelegate> {
    STGroupFetchedResultsController * _fetchedResultsController;
    id /* block */  _modelUpdatedHandler;
    <STPersistenceControllerProtocol> * _persistenceController;
    NSNumber * _userDSID;
    NSManagedObjectID * _userObjectID;
    STCommunicationSafetyViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) STGroupFetchedResultsController *fetchedResultsController;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ modelUpdatedHandler;
@property (nonatomic, readonly) <STPersistenceControllerProtocol> *persistenceController;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *userDSID;
@property (nonatomic, copy) NSManagedObjectID *userObjectID;
@property (readonly) STCommunicationSafetyViewModel *viewModel;

- (void).cxx_destruct;
- (void)_loadViewModel;
- (void)_registerForPersistentStoreNotifications;
- (void)_reportCoreAnalyticsEventCommunicationSafetyEnabled:(bool)arg1;
- (id)fetchedResultsController;
- (void)groupResultsController:(id)arg1 didChangeResultsForRequest:(id)arg2 objectID:(id)arg3 changeType:(unsigned long long)arg4;
- (id)initWithPersistenceController:(id)arg1 userDSID:(id)arg2;
- (id)initWithPersistenceController:(id)arg1 userDSID:(id)arg2 modelUpdatedHandler:(id /* block */)arg3;
- (id /* block */)modelUpdatedHandler;
- (void)persistCommunicationSafetySettingsWithCompletionHandler:(id /* block */)arg1;
- (id)persistenceController;
- (void)saveCommunicationSafetyReceivingRestricted:(bool)arg1 communicationSafetySendingRestricted:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)setFetchedResultsController:(id)arg1;
- (void)setModelUpdatedHandler:(id /* block */)arg1;
- (void)setUserDSID:(id)arg1;
- (void)setUserObjectID:(id)arg1;
- (id)userDSID;
- (id)userObjectID;
- (id)viewModel;

@end
