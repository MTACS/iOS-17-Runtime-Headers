
@interface BRCAutoBugCaptureReporter : NSObject

+ (void)captureLogsForOperationType:(id)arg1 ofSubtype:(id)arg2 forError:(id)arg3;
+ (void)captureLogsForOperationType:(id)arg1 ofSubtype:(id)arg2 forError:(id)arg3 waitForCompletion:(bool)arg4;
+ (void)captureLogsForOperationType:(id)arg1 ofSubtype:(id)arg2 withContext:(id)arg3;
+ (void)captureLogsForOperationType:(id)arg1 ofSubtype:(id)arg2 withContext:(id)arg3 waitForCompletion:(bool)arg4;
+ (bool)shouldIgnoreReportForOperationType:(id)arg1 ofSubtype:(id)arg2 forError:(id)arg3;

@end
