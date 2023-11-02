
@protocol MCMReply_Internal <MCMReply>

@required

- (NSObject<OS_dispatch_queue> *)fastWorkloop;
- (<MCMResultPromise> *)resultPromise;
- (NSObject<OS_dispatch_queue> *)slowWorkloop;
- (NSObject<OS_xpc_object> *)xpcReply;

@end
