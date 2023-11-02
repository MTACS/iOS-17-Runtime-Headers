
@interface SearchUIBiomeStreamSubscriber : NSObject {
    BPSSink * _biomeSink;
    NSNotificationCenter * _center;
    bool  _finished;
    unsigned long long  _observerCount;
    NSObject<OS_dispatch_queue> * _queue;
    BMStreamBase * _stream;
    NSString * _streamIdentifier;
}

@property (nonatomic, retain) BPSSink *biomeSink;
@property (nonatomic, retain) NSNotificationCenter *center;
@property (readonly) bool finished;
@property unsigned long long observerCount;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) BMStreamBase *stream;
@property (readonly) NSString *streamIdentifier;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 selector:(SEL)arg2;
- (id)biomeSink;
- (id)center;
- (void)dealloc;
- (bool)finished;
- (void)getLatestEventWithCompletion:(id /* block */)arg1;
- (id)initWithStreamIdentifier:(id)arg1;
- (bool)isFinished;
- (id)latestEvent;
- (id)notificationName;
- (unsigned long long)observerCount;
- (id)queue;
- (id)queueLabel;
- (void)removeObserver:(id)arg1;
- (id)schedulerIdentifier;
- (void)setBiomeSink:(id)arg1;
- (void)setCenter:(id)arg1;
- (void)setObserverCount:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setStream:(id)arg1;
- (void)setupSink;
- (id)stream;
- (id)streamIdentifier;
- (void)updateWithEvent:(id)arg1;

@end
