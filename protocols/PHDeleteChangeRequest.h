
@protocol PHDeleteChangeRequest <PHChangeRequest>

@required

- (NSString *)clientBundleID;
- (void)deleteManagedObject:(NSManagedObject *)arg1 photoLibrary:(PLPhotoLibrary *)arg2;
- (bool)validateForDeleteManagedObject:(NSManagedObject *)arg1 error:(id*)arg2;

@end
