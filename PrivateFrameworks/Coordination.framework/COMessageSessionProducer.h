
@interface COMessageSessionProducer : NSObject {
    <COMessageSessionProducerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    COMessageChannel * _messageChannel;
    NSMutableDictionary * _sessions;
    NSString * _subTopic;
}

@property (nonatomic, readonly) <COMessageSessionProducerDelegate> *delegate;
@property (nonatomic, readonly, copy) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, readonly) COMessageChannel *messageChannel;
@property (nonatomic, retain) NSMutableDictionary *sessions;
@property (nonatomic, readonly, copy) NSString *subTopic;

- (void).cxx_destruct;
- (id)delegate;
- (id)delegateQueue;
- (id)description;
- (id)initWithChannel:(id)arg1 subTopic:(id)arg2 delegate:(id)arg3 dispatchQueue:(id)arg4;
- (id)messageChannel;
- (id)sessions;
- (void)setSessions:(id)arg1;
- (void)startSessionWithMembers:(id)arg1;
- (id)subTopic;

@end
