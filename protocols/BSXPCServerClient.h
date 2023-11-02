
@protocol BSXPCServerClient <NSObject>

@required

- (NSObject<OS_xpc_object> *)connection;
- (void)invalidate;
- (void)resume;
- (void)suspend;

@end
