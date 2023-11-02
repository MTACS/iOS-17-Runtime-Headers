
@interface VCXPCClientShared : AVConferenceXPCClient {
    NSObject<OS_dispatch_queue> * _registeredBlocksQueue;
    NSMutableDictionary * _registeredUUIDServiceBlocks;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *registeredBlocksQueue;
@property (nonatomic, readonly) NSMutableDictionary *registeredUUIDServiceBlocks;

- (void)dealloc;
- (void)deregisterFromNotifications;
- (void)deregisterWithUUID:(id)arg1 service:(char *)arg2;
- (id)init;
- (void)registerBlockWithUUID:(id)arg1 service:(char *)arg2 block:(id /* block */)arg3;
- (id)registeredBlocksQueue;
- (id)registeredUUIDServiceBlocks;

@end
