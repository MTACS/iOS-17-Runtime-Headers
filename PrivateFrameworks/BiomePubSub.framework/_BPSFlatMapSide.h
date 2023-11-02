
@interface _BPSFlatMapSide : NSObject <BPSSubscriber> {
    long long  _index;
    _BPSFlatMapOuter * _outer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long index;
@property (nonatomic, retain) _BPSFlatMapOuter *outer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (long long)index;
- (id)initWithIndex:(long long)arg1 outer:(id)arg2;
- (id)outer;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (void)setIndex:(long long)arg1;
- (void)setOuter:(id)arg1;

@end
