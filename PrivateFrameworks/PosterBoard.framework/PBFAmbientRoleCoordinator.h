
@interface PBFAmbientRoleCoordinator : PBFPosterRoleCoordinator

+ (id)subscribedEvents;
+ (id)supportedAttributes;
+ (id)supportedChangeTypes;

- (bool)_executeAmbientChargerConfigurationUpdateForPosterUUID:(id)arg1 newAmbientChargerConfiguration:(id)arg2 currentCollection:(id)arg3 storage:(id)arg4 error:(out id*)arg5;
- (bool)_executeChange:(id)arg1 storage:(id)arg2 outEvents:(out id*)arg3 error:(out id*)arg4;
- (bool)_prepareAttributesForIngestionForPoster:(id)arg1 existingAttributes:(id)arg2 incomingAttributes:(id)arg3 proposedAttributesToDelete:(out id*)arg4 proposedAttributesToUpdate:(out id*)arg5 storage:(id)arg6 currentCollection:(id)arg7 error:(out id*)arg8;
- (id)_sortedPosterUUIDsByExtensionIdentifierFromStorage:(id)arg1;
- (id)defaultAttribute:(id)arg1 forNewPosterFromProvider:(id)arg2;
- (id)defaultAttributesForNewPosterFromProvider:(id)arg1;
- (id)determineActivePosterConfigurationForStorage:(id)arg1 context:(id)arg2;
- (bool)finalizeChangesWithChangeHandler:(id)arg1 outEvents:(out id*)arg2 error:(out id*)arg3;
- (id)initWithStorage:(id)arg1 modelCoordinatorProvider:(id)arg2;
- (void)noteDidResetRoleCoordinator:(id)arg1;
- (bool)notifyEventWasReceived:(id)arg1 changes:(out id*)arg2 storage:(id)arg3;
- (id)sortedPosterUUIDsFromStorage:(id)arg1;
- (id)sortedPosterUUIDsUsingSortedPosterUUIDsByExtensionIdentifier:(id)arg1;
- (bool)synchronizeFileSystemAttributesForStorage:(id)arg1 error:(out id*)arg2;
- (bool)validateEventIsRelevent:(id)arg1;

@end
