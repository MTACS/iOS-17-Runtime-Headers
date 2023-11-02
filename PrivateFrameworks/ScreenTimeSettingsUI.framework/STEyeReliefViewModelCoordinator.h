
@interface STEyeReliefViewModelCoordinator : NSObject <STEyeReliefViewModelCoordinator, STGroupFetchedResultsControllerDelegate> {
    STGroupFetchedResultsController * _fetchedResultsController;
    <STPersistenceControllerProtocol> * _persistenceController;
    NSNumber * _userDSID;
    NSManagedObjectID * _userObjectID;
    STEyeReliefViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) STGroupFetchedResultsController *fetchedResultsController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <STPersistenceControllerProtocol> *persistenceController;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *userDSID;
@property (nonatomic, copy) NSManagedObjectID *userObjectID;
@property (readonly) STEyeReliefViewModel *viewModel;

- (void).cxx_destruct;
- (void)_loadViewModel;
- (void)_loadViewModelWithContext:(id)arg1;
- (void)_registerForPersistentStoreNotifications;
- (id)fetchedResultsController;
- (void)groupResultsController:(id)arg1 didChangeResultsForRequest:(id)arg2 objectID:(id)arg3 changeType:(unsigned long long)arg4;
- (id)initWithPersistenceController:(id)arg1 userDSID:(id)arg2;
- (void)persistEyeReliefState:(bool)arg1;
- (void)persistEyeReliefState:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)persistenceController;
- (void)setFetchedResultsController:(id)arg1;
- (void)setUserDSID:(id)arg1;
- (void)setUserObjectID:(id)arg1;
- (id)userDSID;
- (id)userObjectID;
- (id)viewModel;

@end
