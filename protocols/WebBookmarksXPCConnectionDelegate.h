
@protocol WebBookmarksXPCConnectionDelegate <NSObject>

@required

- (void)connection:(WebBookmarksXPCConnection *)arg1 didCloseWithError:(NSObject<OS_xpc_object> *)arg2;

@end
