
@protocol CoreDAVPutTaskDelegate <CoreDAVTaskDelegate>

@optional

- (void)putTask:(CoreDAVPutTask *)arg1 completedWithNewETag:(NSString *)arg2 error:(NSError *)arg3;

@end
