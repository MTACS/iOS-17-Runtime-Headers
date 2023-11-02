
@interface DTTapServiceMessageSender : NSObject {
    DTXChannel * _channel;
}

@property (nonatomic, readonly, retain) DTXChannel *channel;

- (void).cxx_destruct;
- (id)channel;
- (id)initWithChannel:(id)arg1;
- (void)sendBarrierMessage;
- (void)sendMessage:(id)arg1;

@end
