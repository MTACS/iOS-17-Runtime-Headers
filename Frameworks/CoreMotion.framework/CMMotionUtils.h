
@interface CMMotionUtils : NSObject

+ (long long)authorizationStatus;
+ (unsigned long long)copyDataFrom:(id)arg1 to:(id)arg2;
+ (bool)featureAvailability:(const char *)arg1;
+ (id)fileHandleForWritingToURL:(id)arg1;
+ (id)getExecutablePathFromPid:(int)arg1;
+ (bool)hasEntitlement:(id)arg1;
+ (long long)isAuthorizedForEntitlement:(id)arg1;
+ (bool)isMotionActivityEntitled;
+ (id)logDirectory;
+ (void)sendMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1 withReplyClasses:(id)arg2 callback:(id /* block */)arg3;
+ (id)sendMessage:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1 withReplyClassesSync:(id)arg2;
+ (struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })sendMessageSync:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1;
+ (void)tccServiceMotionAccessAllowingMac:(bool)arg1 block:(id /* block */)arg2;
+ (void)tccServiceMotionAccessAllowingMacWithBlock:(id /* block */)arg1;
+ (void)tccServiceMotionAccessWithBlock:(id /* block */)arg1;
+ (void)tccServiceMotionAccessWithLabel:(id)arg1;

@end
