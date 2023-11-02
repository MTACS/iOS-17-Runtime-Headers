
@interface BPSZip : BPSPublisher {
    <BPSPublisher> * _a;
    <BPSPublisher> * _b;
    NSMutableArray * _eventsA;
    NSMutableArray * _eventsB;
    bool  _nextIsB;
}

@property (nonatomic, readonly) <BPSPublisher> *a;
@property (nonatomic, readonly) <BPSPublisher> *b;
@property (nonatomic, retain) NSMutableArray *eventsA;
@property (nonatomic, retain) NSMutableArray *eventsB;
@property (nonatomic) bool nextIsB;

+ (id)new;

- (void).cxx_destruct;
- (id)_tryConstructResultTuple;
- (id)a;
- (id)b;
- (bool)completed;
- (id)eventsA;
- (id)eventsB;
- (id)init;
- (id)initWithA:(id)arg1 b:(id)arg2;
- (id)nextEvent;
- (bool)nextIsB;
- (void)reset;
- (void)setEventsA:(id)arg1;
- (void)setEventsB:(id)arg1;
- (void)setNextIsB:(bool)arg1;
- (void)subscribe:(id)arg1;
- (id)upstreamPublishers;

@end
