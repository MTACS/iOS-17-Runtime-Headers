
@protocol HDXPCActivityShim

@required

- (NSObject<OS_xpc_object> *)xpcActivity_copyCriteria:(NSObject<OS_xpc_object> *)arg1;
- (long long)xpcActivity_getState:(NSObject<OS_xpc_object> *)arg1;
- (void)xpcActivity_register:(void *)arg1 criteria:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: const char *, NSObject<OS_xpc_object> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<OS_xpc_object> *, void*
- (bool)xpcActivity_setCompletionStatus:(long long)arg1 activity:(NSObject<OS_xpc_object> *)arg2;
- (void)xpcActivity_setCriteria:(NSObject<OS_xpc_object> *)arg1 activity:(NSObject<OS_xpc_object> *)arg2;
- (bool)xpcActivity_setState:(long long)arg1 activity:(NSObject<OS_xpc_object> *)arg2;
- (bool)xpcActivity_shouldDefer:(NSObject<OS_xpc_object> *)arg1;
- (void)xpcActivity_unregister:(const char *)arg1;

@end
