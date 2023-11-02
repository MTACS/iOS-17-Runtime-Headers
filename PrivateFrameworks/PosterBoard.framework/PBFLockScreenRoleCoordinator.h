
@interface PBFLockScreenRoleCoordinator : PBFPosterRoleCoordinator

+ (id)supportedAttributes;
+ (id)supportedChangeTypes;
+ (bool)supportsSupplementalUpdates;

- (bool)_executeChange:(id)arg1 storage:(id)arg2 outEvents:(out id*)arg3 error:(out id*)arg4;
- (bool)_prepareAttributesForIngestionForPoster:(id)arg1 existingAttributes:(id)arg2 incomingAttributes:(id)arg3 proposedAttributesToDelete:(out id*)arg4 proposedAttributesToUpdate:(out id*)arg5 storage:(id)arg6 currentCollection:(id)arg7 error:(out id*)arg8;
- (id)defaultAttributesForNewPosterFromProvider:(id)arg1;
- (id)determineActivePosterConfigurationForStorage:(id)arg1 context:(id)arg2;
- (id)initWithStorage:(id)arg1 modelCoordinatorProvider:(id)arg2;
- (bool)notifyEventWasReceived:(id)arg1 changes:(out id*)arg2 storage:(id)arg3;
- (bool)synchronizeFileSystemAttributesForStorage:(id)arg1 error:(out id*)arg2;

@end
