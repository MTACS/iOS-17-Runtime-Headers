
@interface BPSRemoveDuplicates : BPSPublisher {
    id /* block */  _isDuplicate;
    id  _last;
    <BPSPublisher> * _upstream;
}

@property (nonatomic, readonly, copy) id /* block */ isDuplicate;
@property (nonatomic, retain) id last;
@property (nonatomic, readonly) <BPSPublisher> *upstream;

+ (id)new;

- (void).cxx_destruct;
- (id)init;
- (id)initWithUpstream:(id)arg1 isDuplicate:(id /* block */)arg2;
- (id /* block */)isDuplicate;
- (id)last;
- (id)nextEvent;
- (void)reset;
- (void)setLast:(id)arg1;
- (void)subscribe:(id)arg1;
- (id)upstream;
- (id)upstreamPublishers;

@end
