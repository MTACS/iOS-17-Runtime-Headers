
@protocol PBFPosterRoleCoordinating <NSObject, BSInvalidatable>

@required

+ (NSArray *)buildInitialStateSetupEventsForRoleCoordinator:(id <PBFPosterRoleCoordinating>)arg1 extensionHandlers:(NSArray *)arg2 extensionStoreCoordinators:(NSArray *)arg3;
+ (NSSet *)protectedAttributes;
+ (NSSet *)subscribedEvents;
+ (NSSet *)supportedAttributes;
+ (NSSet *)supportedChangeTypes;

- (NSDictionary *)attributesForConfiguration:(PRPosterConfiguration *)arg1 ofType:(NSSet *)arg2 storage:(id <PBFPosterExtensionDataStorageRetrieving>)arg3;
- (PRPosterCollection *)buildNewPosterCollectionFromStorage:(id <PBFPosterExtensionDataStorageRetrieving>)arg1;
- (NSDictionary *)defaultAttributesForNewPosterFromProvider:(NSString *)arg1;
- (PRPosterConfiguration *)determineActivePosterConfigurationForContext:(id <PBFPosterRoleCoordinatorTransitionContext>)arg1;
- (PRPosterConfiguration *)determineActivePosterConfigurationForStorage:(id <PBFPosterExtensionDataStorageRetrieving>)arg1 context:(id <PBFPosterRoleCoordinatorTransitionContext>)arg2;
- (bool)finalizeChangesWithChangeHandler:(id <PBFPosterExtensionDataStorageMutating><PBFPosterExtensionDataStorageRetrieving>)arg1 outEvents:(out id*)arg2 error:(out id*)arg3;
- (unsigned long long)maximumNumberOfPosters;
- (bool)notifyEventWasReceived:(PBFPosterDataStoreEvent *)arg1 changes:(out id*)arg2 storage:(id <PBFPosterExtensionDataStorageRetrieving>)arg3;
- (PRPosterCollection *)posterCollection;
- (NSString *)role;
- (void)setMaximumNumberOfPosters:(unsigned long long)arg1;
- (NSError *)setupRoleIfNecessaryWithStorage:(id <PBFPosterExtensionDataStorageMutating><PBFPosterExtensionDataStorageRetrieving>)arg1;
- (bool)updateCoordinatorWithChange:(PBFPosterRoleCoordinatorChange *)arg1 changeHandler:(id <PBFPosterExtensionDataStorageMutating><PBFPosterExtensionDataStorageRetrieving>)arg2 emitEvents:(out id*)arg3 error:(out id*)arg4;
- (bool)validateEventIsRelevent:(PBFPosterDataStoreEvent *)arg1;

@end
