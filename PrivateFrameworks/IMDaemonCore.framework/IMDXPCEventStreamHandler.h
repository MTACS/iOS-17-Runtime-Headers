
@interface IMDXPCEventStreamHandler : NSObject {
    NSMapTable * _delegateToQueue;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSMapTable *delegateToQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)delegateToQueue;
- (void)didReceiveEventWithName:(id)arg1 userInfo:(id)arg2;
- (id)init;
- (id)initWithEventStreamName:(const char *)arg1;
- (id)queue;
- (id)queueForDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;

@end
