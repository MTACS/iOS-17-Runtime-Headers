
@interface VCXPCManager : VCObject {
    NSMutableArray * _registeredServices;
    NSObject<OS_dispatch_queue> * _xpcCommandQueue;
}

+ (void)addNSError:(id)arg1 toXPCArgumentDictionary:(id)arg2;
+ (void)registerBlock:(id /* block */)arg1 forService:(const char *)arg2;
+ (void)registerBlocksForService;
+ (void)registerTerminateBlock:(id /* block */)arg1 forService:(const char *)arg2 expectedClasses:(id)arg3;
+ (id)sharedInstance;

- (id)allocWithZone:(struct _NSZone { }*)arg1;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)deregisterBlocksFromService;
- (id)init;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
