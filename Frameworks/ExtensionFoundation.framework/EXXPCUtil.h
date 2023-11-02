
@interface EXXPCUtil : NSObject

+ (int)addExternalServiceForPid:(int)arg1 path:(id)arg2 overlay:(id)arg3;
+ (void)assertIsExtensionProcess;
+ (void)checkInWithLaunchd;
+ (int)servicePidFromXPCConnection:(id)arg1;
+ (id)sharedInstance;

@end
