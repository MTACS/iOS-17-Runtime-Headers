
@interface PXCameraMessageHandler : NSObject {
    NSObject<OS_nw_connection> * _connection;
    id  _delegate;
    NSMutableDictionary * _messageQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _messageQueueLock;
    unsigned int  _pingInterval;
    PXCameraMessage * _pingMessage;
    NSObject<OS_dispatch_source> * _pingTimer;
    unsigned int  _retryCount;
    NSUUID * _senderID;
    unsigned int  _timeout;
}

@property (retain) NSObject<OS_nw_connection> *connection;
@property id delegate;
@property (retain) NSMutableDictionary *messageQueue;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } messageQueueLock;
@property unsigned int pingInterval;
@property (retain) PXCameraMessage *pingMessage;
@property (retain) NSObject<OS_dispatch_source> *pingTimer;
@property unsigned int retryCount;
@property (nonatomic, copy) NSUUID *senderID;
@property unsigned int timeout;

- (void)addQueueEntry:(id)arg1 messageID:(id)arg2;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (id)getQueueEntryMessageID:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (id)messageQueue;
- (struct os_unfair_lock_s { unsigned int x1; })messageQueueLock;
- (unsigned int)pingInterval;
- (id)pingMessage;
- (id)pingTimer;
- (void)receiveDataWithSize:(unsigned int)arg1 headerMsgID:(id)arg2;
- (void)receiveMessage;
- (void)removeQueueEntryMessageID:(id)arg1;
- (unsigned int)retryCount;
- (void)sendData:(id)arg1;
- (void)sendMessage:(id)arg1 withReply:(id /* block */)arg2;
- (id)senderID;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMessageQueue:(id)arg1;
- (void)setMessageQueueLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setPingInterval:(unsigned int)arg1;
- (void)setPingMessage:(id)arg1;
- (void)setPingMessage:(id)arg1 interval:(unsigned int)arg2;
- (void)setPingTimer:(id)arg1;
- (void)setRetryCount:(unsigned int)arg1;
- (void)setSenderID:(id)arg1;
- (void)setTimeout:(unsigned int)arg1;
- (void)start;
- (unsigned int)timeout;
- (void)updateQueueEntryMessageID:(id)arg1 withKey:(id)arg2 value:(id)arg3;

@end
