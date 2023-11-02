
@interface DNDSXPCEventStream : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _timerHandlersByToken;
}

- (void).cxx_destruct;
- (id)init;
- (void)registerTimerHandlerWithServiceIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)setTimer:(id)arg1;
- (void)start;

@end
