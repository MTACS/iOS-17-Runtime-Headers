
@interface _BPSMergedSide : NSObject <BPSSubscriber> {
    long long  _index;
    _BPSMerged * _merger;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long index;
@property (nonatomic, retain) _BPSMerged *merger;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (long long)index;
- (id)initWithIndex:(long long)arg1 merger:(id)arg2;
- (id)merger;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (void)setIndex:(long long)arg1;
- (void)setMerger:(id)arg1;

@end
