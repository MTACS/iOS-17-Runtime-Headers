
@interface _BPSWindowerSide : BPSSubscription <BPSSubscriber> {
    NSString * _identifier;
    <NSCopying> * _key;
    _BPSWindowerInner * _windowerInner;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) <NSCopying> *key;
@property (readonly) Class superclass;
@property (nonatomic, readonly) _BPSWindowerInner *windowerInner;

- (void).cxx_destruct;
- (void)cancel;
- (id)identifier;
- (id)initWithKey:(id)arg1 identifier:(id)arg2 windowerInner:(id)arg3;
- (id)key;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (void)requestDemand:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (id)windowerInner;

@end
