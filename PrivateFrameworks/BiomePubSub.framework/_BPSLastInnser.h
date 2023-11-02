
@interface _BPSLastInnser : NSObject <BPSSubscriber> {
    <BPSSubscriber> * _downstream;
    id  _last;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <BPSSubscriber> *downstream;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id last;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (id)downstream;
- (id)initWithDownstream:(id)arg1;
- (id)last;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (void)setDownstream:(id)arg1;
- (void)setLast:(id)arg1;

@end
