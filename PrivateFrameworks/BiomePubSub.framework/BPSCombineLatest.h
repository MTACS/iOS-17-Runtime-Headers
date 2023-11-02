
@interface BPSCombineLatest : BPSPublisher {
    <BPSPublisher> * _a;
    <BPSPublisher> * _b;
    id  _latestA;
    id  _latestB;
    bool  _nextIsB;
}

@property (nonatomic, readonly) <BPSPublisher> *a;
@property (nonatomic, readonly) <BPSPublisher> *b;
@property (nonatomic, retain) id latestA;
@property (nonatomic, retain) id latestB;
@property (nonatomic) bool nextIsB;

+ (id)new;

- (void).cxx_destruct;
- (id)a;
- (id)b;
- (bool)completed;
- (id)init;
- (id)initWithA:(id)arg1 b:(id)arg2;
- (id)latestA;
- (id)latestB;
- (id)nextEvent;
- (bool)nextIsB;
- (void)reset;
- (void)setLatestA:(id)arg1;
- (void)setLatestB:(id)arg1;
- (void)setNextIsB:(bool)arg1;
- (void)subscribe:(id)arg1;
- (id)upstreamPublishers;

@end
