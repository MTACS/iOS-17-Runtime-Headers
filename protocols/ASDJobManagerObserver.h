
@protocol ASDJobManagerObserver <NSObject>

@optional

- (void)jobManager:(ASDJobManager *)arg1 changedJobs:(NSArray *)arg2;
- (void)jobManager:(ASDJobManager *)arg1 completedJobs:(NSArray *)arg2;
- (void)jobManager:(ASDJobManager *)arg1 updatedProgressOfJobs:(NSArray *)arg2;
- (void)jobManager:(ASDJobManager *)arg1 updatedStateOfJobs:(NSArray *)arg2;

@end
