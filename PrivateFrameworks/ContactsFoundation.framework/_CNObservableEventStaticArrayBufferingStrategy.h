
@interface _CNObservableEventStaticArrayBufferingStrategy : _CNObservableEventBufferingStrategy {
    NSArray * _events;
}

@property (nonatomic, readonly) NSArray *events;

- (void).cxx_destruct;
- (void)addEvent:(id)arg1;
- (id)allEvents;
- (id)events;
- (id)initWithEvents:(id)arg1;
- (bool)isSequenceTerminated;

@end
