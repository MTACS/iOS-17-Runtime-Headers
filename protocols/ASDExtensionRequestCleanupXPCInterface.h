
@protocol ASDExtensionRequestCleanupXPCInterface <NSObject>

@required

- (void)serviceExtensionPerformCleanup;
- (void)serviceExtensionTimeWillExpire;

@end
