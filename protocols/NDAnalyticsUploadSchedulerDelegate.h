
@protocol NDAnalyticsUploadSchedulerDelegate <NSObject>

@required

- (void)uploadScheduler:(void *)arg1 performUploadWithCompletion:(void *)arg2; // needs 2 arg types, found 6: NDAnalyticsUploadScheduler *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)uploadSchedulerDidDropScheduledBackgroundUpload:(NDAnalyticsUploadScheduler *)arg1;

@end
