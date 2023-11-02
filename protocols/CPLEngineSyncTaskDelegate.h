
@protocol CPLEngineSyncTaskDelegate <NSObject>

@required

- (void)task:(CPLEngineSyncTask *)arg1 didFinishWithError:(NSError *)arg2;
- (void)task:(CPLEngineSyncTask *)arg1 didProgress:(float)arg2 userInfo:(NSDictionary *)arg3;

@end
