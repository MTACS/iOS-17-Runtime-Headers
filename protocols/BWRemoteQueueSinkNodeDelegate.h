
@protocol BWRemoteQueueSinkNodeDelegate <NSObject>

@required

- (void)remoteQueueSinkNode:(BWRemoteQueueSinkNode *)arg1 localQueueBecameReady:(struct localQueueOpaque { }*)arg2;
- (void)remoteQueueSinkNode:(BWRemoteQueueSinkNode *)arg1 queueBecameReady:(struct remoteQueueSenderOpaque { }*)arg2;

@end
