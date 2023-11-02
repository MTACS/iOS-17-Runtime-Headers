
@interface _BPSMapInner : NSObject <BPSSubscriber> {
    <BPSSubscriber> * _downstream;
    id /* block */  _transform;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <BPSSubscriber> *downstream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ transform;

- (void).cxx_destruct;
- (void)cancel;
- (id)downstream;
- (id)initWithDownstream:(id)arg1 transform:(id /* block */)arg2;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (void)setDownstream:(id)arg1;
- (void)setTransform:(id /* block */)arg1;
- (id /* block */)transform;

@end
