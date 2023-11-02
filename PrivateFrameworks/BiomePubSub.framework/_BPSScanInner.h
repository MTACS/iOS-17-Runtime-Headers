
@interface _BPSScanInner : NSObject <BPSSubscriber> {
    <BPSSubscriber> * _downstream;
    id /* block */  _nextPartialResult;
    id  _result;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <BPSSubscriber> *downstream;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ nextPartialResult;
@property (nonatomic, retain) id result;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (void)cancel;
- (id)downstream;
- (id)init;
- (id)initWithDownstream:(id)arg1 nextPartialResult:(id /* block */)arg2 initialResult:(id)arg3;
- (id /* block */)nextPartialResult;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (id)result;
- (void)setDownstream:(id)arg1;
- (void)setNextPartialResult:(id /* block */)arg1;
- (void)setResult:(id)arg1;

@end
