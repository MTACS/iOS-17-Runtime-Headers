
@interface _CNObservableEventDynamicQueueBufferingStrategy : _CNObservableEventBufferingStrategy {
    CNQueue * _queue;
}

@property (nonatomic, readonly) CNQueue *queue;

- (void).cxx_destruct;
- (void)addEvent:(id)arg1;
- (id)allEvents;
- (id)initWithQueue:(id)arg1;
- (bool)isSequenceTerminated;
- (id)queue;

@end
