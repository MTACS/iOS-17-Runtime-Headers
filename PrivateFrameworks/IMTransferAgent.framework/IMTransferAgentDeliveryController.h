
@interface IMTransferAgentDeliveryController : NSObject {
    FTMessageDelivery * _messageDelivery;
}

@property (nonatomic, retain) FTMessageDelivery *messageDelivery;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)messageDelivery;
- (void)sendFTMessage:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setMessageDelivery:(id)arg1;

@end
