
@interface CRKPrimitiveBackedIDSMessageBroadcaster : NSObject <CRKIDSMessageBroadcasting> {
    <CRKIDSPrimitives> * _IDSPrimitives;
    NSHashTable * _broadcastHandlers;
    <CRKCancelable> * _messageSubscription;
}

@property (nonatomic, readonly) <CRKIDSPrimitives> *IDSPrimitives;
@property (nonatomic, readonly) NSHashTable *broadcastHandlers;
@property (nonatomic, retain) <CRKCancelable> *messageSubscription;

+ (id)broadcasterWithIDSPrimitives:(id)arg1;

- (void).cxx_destruct;
- (id)IDSPrimitives;
- (void)addBroadcastHandler:(id)arg1;
- (void)beginListeningForMessagesWithCompletion:(id /* block */)arg1;
- (id)broadcastHandlers;
- (void)broadcastMessage:(id)arg1 senderAppleID:(id)arg2 senderAddress:(id)arg3;
- (id)initWithIDSPrimitives:(id)arg1;
- (id)messageSubscription;
- (void)setMessageSubscription:(id)arg1;

@end
