
@protocol CKXPCLogicalDeviceScopedDaemon

@required

- (void)addClouddThrottle:(CKThrottle *)arg1;
- (void)allClouddThrottlesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)clearAllClouddThrottles;
- (void)postClouddWalrusUpdateNotification;

@end
