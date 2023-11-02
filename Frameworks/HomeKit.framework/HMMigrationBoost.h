
@interface HMMigrationBoost : HMFObject {
    HMFMessageDispatcher * _messageDispatcher;
    NSUUID * _messageTarget;
    NSNotificationCenter * _notificationCenter;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSUUID *messageTarget;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_handleDaemonDisconnect:(id)arg1;
- (id)initWithMessageTarget:(id)arg1 notificationCenter:(id)arg2 messageDispatcher:(id)arg3 queue:(id)arg4;
- (id)messageDispatcher;
- (id)messageTarget;
- (id)notificationCenter;
- (id)queue;
- (void)startBoost;
- (void)stopBoost;

@end
