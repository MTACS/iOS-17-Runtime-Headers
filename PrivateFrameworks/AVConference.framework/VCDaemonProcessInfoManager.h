
@interface VCDaemonProcessInfoManager : NSObject {
    NSObject<OS_dispatch_queue> * _xpcQueue;
}

+ (id)copyProcessInfo;
+ (id)sharedManager;

- (id)allocWithZone:(struct _NSZone { }*)arg1;
- (id)autorelease;
- (id)copyAuditTokenInfo;
- (id)copyUniquePidInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)deregisterBlocksForService;
- (id)init;
- (void)registerBlocksForService;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
