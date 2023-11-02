
@interface MRCompositeMessage : MRProtocolMessage {
    NSMutableArray * _messages;
    MRProtocolMessageOptions * _transportOptions;
}

@property (nonatomic, readonly) NSArray *messages;

- (void).cxx_destruct;
- (void)addMessage:(id)arg1;
- (id)description;
- (id)init;
- (id)messages;
- (void)setTransportOptions:(id)arg1;
- (id)transportOptions;

@end
