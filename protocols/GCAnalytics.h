
@protocol GCAnalytics <NSObject>

@required

- (void)sendEvent:(NSString *)arg1 withPayload:(NSDictionary *)arg2;
- (bool)sendEvent:(void *)arg1 withPayloadBuilder:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSDictionary *, id /* block */, void*
- (void)sendEvent:(NSString *)arg1 withXPCPayload:(NSObject<OS_xpc_object> *)arg2;
- (bool)sendEvent:(void *)arg1 withXPCPayloadBuilder:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSObject<OS_xpc_object> *, id /* block */, void*

@end
