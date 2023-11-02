
@protocol HMFMessageReceiver <NSObject>

@required

- (NSUUID *)messageTargetUUID;

@optional

- (<HMFDispatchExecutor> *)dispatchContextForMessage:(HMFMessage *)arg1;
- (NSObject<OS_dispatch_queue> *)messageReceiveQueue;

@end
