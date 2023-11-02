
@protocol DESPluginManaging <NSObject>

@required

- (NSString *)bundleIdentifier;
- (DESInternalDodMLTaskResult *)performDodMLTask:(DESInternalDodMLTask *)arg1 outError:(id*)arg2;
- (bool)shouldDownloadURL:(NSURL *)arg1 forTask:(DESInternalDodMLTask *)arg2;
- (void)stopWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSDictionary *)telemetryWithRecordSet:(DESRecordSet *)arg1;

@optional

- (id)performTask:(id <MLRInternalTaskRepresenting>)arg1 error:(id*)arg2;
- (MLRInternalTrialTaskResult *)performTrialTask:(MLRInternalTrialTask *)arg1 outError:(id*)arg2;

@end
