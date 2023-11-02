
@protocol HMDXPCActivityInterfacing <NSObject>

@required

- (NSObject<OS_xpc_object> *)criteriaForXPCActivity:(NSObject<OS_xpc_object> *)arg1;
- (void)registerXPCActivityWithActivityIdentifier:(void *)arg1 criteria:(void *)arg2 activityBlock:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSObject<OS_xpc_object> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<OS_xpc_object> *, void*
- (void)setCriteria:(NSObject<OS_xpc_object> *)arg1 forXPCActivity:(NSObject<OS_xpc_object> *)arg2;
- (bool)setState:(long long)arg1 forXPCActivity:(NSObject<OS_xpc_object> *)arg2;
- (long long)stateForXPCActivity:(NSObject<OS_xpc_object> *)arg1;
- (void)unregisterXPCActivityWithActivityIdentifier:(NSString *)arg1;

@end
