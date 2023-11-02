
@interface AXPIEventSender : NSObject {
    NSObject<OS_dispatch_queue> * _eventSendingQueue;
    struct __IOHIDEventSystemClient { } * _ioSystemPostBackClient;
    unsigned long long  _senderID;
}

@property (nonatomic) unsigned long long senderID;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)sendEventRepresentation:(id)arg1;
- (void)sendIOHIDEventRef:(struct __IOHIDEvent { }*)arg1;
- (unsigned long long)senderID;
- (void)setSenderID:(unsigned long long)arg1;

@end
