
@interface COMessagingQueuedIncomingRequest : NSObject {
    id /* block */  _callback;
    unsigned long long  _enqueueTimestamp;
    COMessagingRequest * _request;
}

@property (nonatomic, readonly) id /* block */ callback;
@property (nonatomic, readonly) unsigned long long enqueueTimestamp;
@property (nonatomic, readonly) COMessagingRequest *request;

- (void).cxx_destruct;
- (id /* block */)callback;
- (unsigned long long)enqueueTimestamp;
- (id)initWithRequest:(id)arg1 callback:(id /* block */)arg2;
- (long long)remainingTimeUsingCurrentTime:(unsigned long long)arg1;
- (id)request;
- (id)senderNode;

@end
