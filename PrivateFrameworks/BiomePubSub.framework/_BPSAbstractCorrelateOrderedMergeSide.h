
@interface _BPSAbstractCorrelateOrderedMergeSide : NSObject <BPSSubscriber> {
    _BPSAbstractCorrelateOrderedMerge * _combiner;
    unsigned long long  _index;
}

@property (nonatomic, retain) _BPSAbstractCorrelateOrderedMerge *combiner;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long index;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id)combiner;
- (unsigned long long)index;
- (id)initWithIndex:(unsigned long long)arg1 combiner:(id)arg2;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (void)setCombiner:(id)arg1;
- (void)setIndex:(unsigned long long)arg1;

@end
