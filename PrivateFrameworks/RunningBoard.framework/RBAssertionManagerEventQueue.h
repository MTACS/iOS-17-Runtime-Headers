
@interface RBAssertionManagerEventQueue : NSObject {
    <RBAssertionManagerQueueDelegate> * _delegate;
    RBEventQueue * _eventQueue;
    RBProcessMap * _expirationWarningEvents;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
    <RBTimeProviding> * _timeProvider;
}

@property (readonly) unsigned long long count;
@property (nonatomic) <RBAssertionManagerQueueDelegate> *delegate;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)delegate;
- (id)description;
- (id)initWithTimeProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateEventsForAssertions:(id)arg1;

@end
