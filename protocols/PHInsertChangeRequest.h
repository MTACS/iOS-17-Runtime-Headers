
@protocol PHInsertChangeRequest <PHUpdateChangeRequest>

@required

- (NSManagedObject *)createManagedObjectForInsertIntoPhotoLibrary:(PLPhotoLibrary *)arg1 error:(id*)arg2;
- (void)finalizeRequestWithBatchSuccess:(bool)arg1;
- (id)initForNewObject;
- (bool)isNewRequest;
- (void)performConcurrentWork;
- (void)setShouldPerformConcurrentWork:(bool)arg1;
- (bool)shouldPerformConcurrentWork;
- (bool)validateInsertIntoPhotoLibrary:(PLPhotoLibrary *)arg1 error:(id*)arg2;

@end
