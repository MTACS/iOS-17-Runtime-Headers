
@protocol TSNewsActivityManagerType

@required

- (void)clearAllSavedUserActivities;
- (void)deregisterActivityWithData:(TSNewsActivityData *)arg1;
- (void)registerCurrentActivityWithData:(TSNewsActivityData *)arg1;

@end
