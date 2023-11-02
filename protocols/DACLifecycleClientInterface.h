
@protocol DACLifecycleClientInterface <NSObject>

@required

- (void)activatedAssertionForActivity:(DACActivityDescriptor *)arg1 withChangeMarker:(DACChangeMarker *)arg2;
- (void)activityListChanged:(DACActivityList *)arg1;
- (void)roleChanged:(DACDeviceRole *)arg1;

@end
