
@interface VSMessageQueue : NSObject {
    <VSMessageQueueDelegate> * _delegate;
    NSMutableArray * _messages;
}

@property (nonatomic) <VSMessageQueueDelegate> *delegate;
@property (nonatomic, retain) NSMutableArray *messages;

- (void).cxx_destruct;
- (void)addMessage:(id)arg1;
- (id)delegate;
- (id)init;
- (id)messages;
- (id)removeAllMessages;
- (void)setDelegate:(id)arg1;
- (void)setMessages:(id)arg1;

@end
