
@interface IPXPCEventStateUpdateStreamSource : NSObject <IPStateUpdateStreamSource> {
    <IPStateUpdateStreamSourceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _resumed;
    NSString * _streamName;
}

@property (readonly, copy) NSString *debugDescription;
@property <IPStateUpdateStreamSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_handleEvent:(id)arg1;
- (id)delegate;
- (id)initWithQueue:(id)arg1 streamName:(id)arg2;
- (void)resume;
- (void)setDelegate:(id)arg1;

@end
