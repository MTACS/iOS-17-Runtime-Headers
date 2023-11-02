
@interface IPXPCEventStateUpdateStreamSubscriber : NSObject {
    bool  _completedHandshake;
    <IPXPCEventStateUpdateStreamSubscriberDelegate> * _delegate;
    NSMutableArray * _queuedMessages;
    unsigned long long  _token;
}

@property (nonatomic) <IPXPCEventStateUpdateStreamSubscriberDelegate> *delegate;
@property (readonly) unsigned long long token;

- (void).cxx_destruct;
- (void)beginHandshake;
- (id)delegate;
- (id)initWithToken:(unsigned long long)arg1;
- (void)sendOrEnqueueUpdateMessage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (unsigned long long)token;

@end
