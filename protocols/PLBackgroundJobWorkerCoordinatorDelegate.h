
@protocol PLBackgroundJobWorkerCoordinatorDelegate <NSObject>

@required

- (void)workerCoordinatorDidFinishAllSubmittedJobsOnBundle:(PLBackgroundJobWorkerCoordinator *)arg1;

@end
