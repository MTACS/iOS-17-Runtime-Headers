
@interface BLSHBacklightHost : NSObject

+ (bool)checkForWatchdogDidFire:(bool)arg1;
+ (void)registerSharedBacklightHost:(id)arg1;
+ (id)sharedBacklightHost;
+ (id)sharedTelemetrySource;

@end
