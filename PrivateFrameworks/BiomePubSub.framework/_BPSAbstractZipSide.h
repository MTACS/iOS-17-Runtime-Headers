
@interface _BPSAbstractZipSide : NSObject <BPSSubscriber> {
    long long  _index;
    _BPSAbstractZip * _zip;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long index;
@property (readonly) Class superclass;
@property (nonatomic, retain) _BPSAbstractZip *zip;

- (void).cxx_destruct;
- (void)cancel;
- (long long)index;
- (id)initWithIndex:(long long)arg1 zip:(id)arg2;
- (void)receiveCompletion:(id)arg1;
- (long long)receiveInput:(id)arg1;
- (void)receiveSubscription:(id)arg1;
- (void)setIndex:(long long)arg1;
- (void)setZip:(id)arg1;
- (id)zip;

@end
