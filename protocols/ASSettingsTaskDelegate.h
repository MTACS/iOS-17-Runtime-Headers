
@protocol ASSettingsTaskDelegate <NSObject>

@required

- (void)settingsTask:(ASSettingsTask *)arg1 completedWithStatus:(long long)arg2 error:(NSError *)arg3 response:(ASSettingsTaskResponse *)arg4;

@end
