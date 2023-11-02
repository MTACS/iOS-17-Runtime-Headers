
@interface PBFPosterRoleCoordinator : NSObject <PBFPosterRoleCoordinating> {
    <PBFPosterRoleCoordinatorDelegate> * _delegate;
    <PBFModelCoordinatorProviding> * _modelCoordinatorProvider;
    PRPosterCollection * _posterCollection;
    NSString * _role;
    <PBFPosterExtensionDataStorageRetrieving> * _storage;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _transactionLock;
    bool  _transactionLock_isInTransaction;
    unsigned long long  maximumNumberOfPosters;
}

@property (readonly, copy) NSString *debugDescription;
@property <PBFPosterRoleCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property unsigned long long maximumNumberOfPosters;
@property (readonly) <PBFModelCoordinatorProviding> *modelCoordinatorProvider;
@property (nonatomic, retain) PRPosterCollection *posterCollection;
@property (readonly) NSString *role;
@property (readonly) <PBFPosterExtensionDataStorageRetrieving> *storage;
@property (readonly) Class superclass;

+ (id)buildInitialStateSetupEventsForRoleCoordinator:(id)arg1 extensionHandlers:(id)arg2 extensionStoreCoordinators:(id)arg3;
+ (void)dumpResultsForEvent:(id)arg1 role:(id)arg2 posterCollection:(id)arg3 changes:(id)arg4 eventWasHandled:(bool)arg5;
+ (id)protectedAttributes;
+ (id)subscribedEvents;
+ (id)supportedAttributes;
+ (id)supportedChangeTypes;
+ (bool)supportsSupplementalUpdates;

- (void).cxx_destruct;
- (bool)_executeChange:(id)arg1 storage:(id)arg2 outEvents:(out id*)arg3 error:(out id*)arg4;
- (bool)_ingestIncomingPosterConfiguration:(id)arg1 change:(id)arg2 currentCollection:(id)arg3 storage:(id)arg4 outEvents:(out id*)arg5 error:(out id*)arg6;
- (bool)_prepareAttributesForIngestionForPoster:(id)arg1 existingAttributes:(id)arg2 incomingAttributes:(id)arg3 proposedAttributesToDelete:(out id*)arg4 proposedAttributesToUpdate:(out id*)arg5 storage:(id)arg6 currentCollection:(id)arg7 error:(out id*)arg8;
- (id)attributesForConfiguration:(id)arg1 ofType:(id)arg2 storage:(id)arg3;
- (id)buildNewPosterCollectionFromStorage:(id)arg1;
- (id)configurationStoreCoordinatorForPosterUUID:(id)arg1 extensionIdentifier:(id)arg2;
- (id)defaultAttributesForNewPosterFromProvider:(id)arg1;
- (id)delegate;
- (id)determineActivePosterConfigurationForContext:(id)arg1;
- (id)determineActivePosterConfigurationForStorage:(id)arg1 context:(id)arg2;
- (bool)finalizeChangesWithChangeHandler:(id)arg1 outEvents:(out id*)arg2 error:(out id*)arg3;
- (id)initWithRole:(id)arg1 storage:(id)arg2 modelCoordinatorProvider:(id)arg3;
- (void)invalidate;
- (id)lastActivatedDatesForPosterCollection:(id)arg1;
- (unsigned long long)maximumNumberOfPosters;
- (id)modelCoordinatorProvider;
- (void)noteDidResetRoleCoordinator:(id)arg1;
- (bool)notifyEventWasReceived:(id)arg1 changes:(out id*)arg2 storage:(id)arg3;
- (id)posterCollection;
- (id)posterConfigurationsSortedByLastActivatedDate:(id)arg1;
- (id)posterWithUUID:(id)arg1;
- (id)posterWithUUID:(id)arg1 extensionIdentifier:(id)arg2;
- (id)role;
- (void)setDelegate:(id)arg1;
- (void)setMaximumNumberOfPosters:(unsigned long long)arg1;
- (void)setPosterCollection:(id)arg1;
- (id)setupRoleIfNecessaryWithStorage:(id)arg1;
- (id)sortedPosterUUIDsFromStorage:(id)arg1;
- (id)storage;
- (bool)synchronizeFileSystemAttributesForStorage:(id)arg1 error:(out id*)arg2;
- (bool)updateCoordinatorWithChange:(id)arg1 changeHandler:(id)arg2 emitEvents:(out id*)arg3 error:(out id*)arg4;
- (bool)validateEventIsRelevent:(id)arg1;

@end
