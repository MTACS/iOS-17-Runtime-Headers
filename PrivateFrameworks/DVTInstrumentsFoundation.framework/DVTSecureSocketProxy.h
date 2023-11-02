
@interface DVTSecureSocketProxy : NSObject {
    NSObject<OS_dispatch_source> * _canReceiveFromConnection;
    NSObject<OS_dispatch_source> * _canSendToConnection;
    bool  _cancelled;
    id /* block */  _cleanupConnection;
    NSObject<OS_dispatch_queue> * _ioQueue;
    unsigned long long  _pendingWrites;
    id /* block */  _receiveDataFromConnection;
    DVTSecureSocketProxyBufferPool * _receiveFromConnectionBufferPool;
    NSObject<OS_dispatch_queue> * _receiveFromConnectionQueue;
    id /* block */  _sendDataToConnection;
    NSObject<OS_dispatch_group> * _sendToConnectionCompleted;
    NSObject<OS_dispatch_queue> * _sendToConnectionQueue;
    NSObject<OS_dispatch_io> * _socketIOChannel;
}

@property (nonatomic, retain) NSObject<OS_dispatch_source> *canReceiveFromConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *canSendToConnection;
@property (nonatomic) bool cancelled;
@property (nonatomic, copy) id /* block */ cleanupConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *ioQueue;
@property (nonatomic) unsigned long long pendingWrites;
@property (nonatomic, copy) id /* block */ receiveDataFromConnection;
@property (nonatomic, retain) DVTSecureSocketProxyBufferPool *receiveFromConnectionBufferPool;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *receiveFromConnectionQueue;
@property (nonatomic, copy) id /* block */ sendDataToConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *sendToConnectionCompleted;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *sendToConnectionQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_io> *socketIOChannel;

- (void).cxx_destruct;
- (void)_onIOQueue_cancelProxy;
- (void)_onIOQueue_finishCleanup;
- (void)_onIOQueue_sendDataToConnection:(id)arg1;
- (id)canReceiveFromConnection;
- (id)canSendToConnection;
- (bool)cancelled;
- (id /* block */)cleanupConnection;
- (id)ioQueue;
- (unsigned long long)pendingWrites;
- (void)readDataFromSocketAndSendToConnection;
- (id /* block */)receiveDataFromConnection;
- (void)receiveDataFromConnectionAndWriteToSocket;
- (id)receiveFromConnectionBufferPool;
- (id)receiveFromConnectionQueue;
- (id /* block */)sendDataToConnection;
- (id)sendToConnectionCompleted;
- (id)sendToConnectionQueue;
- (void)setCanReceiveFromConnection:(id)arg1;
- (void)setCanSendToConnection:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setCleanupConnection:(id /* block */)arg1;
- (void)setIoQueue:(id)arg1;
- (void)setPendingWrites:(unsigned long long)arg1;
- (void)setReceiveDataFromConnection:(id /* block */)arg1;
- (void)setReceiveFromConnectionBufferPool:(id)arg1;
- (void)setReceiveFromConnectionQueue:(id)arg1;
- (void)setSendDataToConnection:(id /* block */)arg1;
- (void)setSendToConnectionCompleted:(id)arg1;
- (void)setSendToConnectionQueue:(id)arg1;
- (void)setSocketIOChannel:(id)arg1;
- (id)socketIOChannel;

@end
