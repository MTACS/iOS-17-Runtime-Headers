
@protocol BackgroundTaskDelegate <NSObject>

@required

- (bool)runTask:(ADBackgroundTaskRequest *)arg1;

@optional

- (void)checkOnTask:(NSString *)arg1 activity:(NSObject<OS_xpc_object> *)arg2;

@end
