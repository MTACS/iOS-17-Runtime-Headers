
@interface OS_xpc_int64 : OS_xpc_object <OS_xpc_int64>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)allowsWeakReference;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (bool)retainWeakReference;

@end
