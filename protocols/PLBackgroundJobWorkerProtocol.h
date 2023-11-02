
@protocol PLBackgroundJobWorkerProtocol <NSObject>

@required

+ (bool)supportsWellKnownPhotoLibraryIdentifier:(long long)arg1;

- (void)performWorkOnItem:(void *)arg1 inLibrary:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <NSCopying> *, PLPhotoLibrary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (PLBackgroundJobWorkerPendingWorkItems *)workItemsNeedingProcessingInLibrary:(PLPhotoLibrary *)arg1;

@optional

+ (bool)usesMultipleLibrariesConcurrently;

- (bool)avoidCheckingOtherWorkersIfThisWorkerHasPendingWork;
- (bool)hasEnoughDiskSpaceToContinue:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)isInterruptible;
- (PLPhotoLibrary *)photoLibraryWithDatabaseContext:(PLDatabaseContext *)arg1;
- (void)stopWorkingOnItem:(id <NSCopying>)arg1;
- (void)workerDidFinishWithDatabaseContext:(PLDatabaseContext *)arg1;

@end
