
@protocol HDProtectedDataOperationSchedulerObserver <NSObject>

@required

- (NSString *)diagnosticDescription;
- (void)protectedDataOperationSchedulerProfileIsReady:(HDProtectedDataOperationScheduler *)arg1;
- (void)protectedDataOperationSchedulerProtectedDataIsAvailable:(HDProtectedDataOperationScheduler *)arg1;

@end
