
@protocol PLBackgroundJobLibraryCoordinatorDelegate <NSObject>

@required

- (void)libraryCoordinatorFinishedJobsOnAllSubmittedBundles;
- (void)libraryCoordinatorFinishedJobsOnSubmittedBundle:(PLPhotoLibraryBundle *)arg1 withCriteria:(PLBackgroundJobCriteria *)arg2;

@end
