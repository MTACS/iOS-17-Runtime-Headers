
@protocol _DASBGSystemTaskScheduler <NSObject>

@required

- (void)acknowledgeSystemTaskLaunchWithIdentifier:(NSString *)arg1;
- (void)acknowledgeSystemTaskSuspensionWithIdentifier:(NSString *)arg1;
- (void)completeSystemTaskWithIdentifier:(NSString *)arg1;
- (void)unregisterSystemTaskWithIdentifier:(NSString *)arg1;
- (void)updateTaskRequestWithIdentifier:(void *)arg1 descriptor:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSObject<OS_xpc_object> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
