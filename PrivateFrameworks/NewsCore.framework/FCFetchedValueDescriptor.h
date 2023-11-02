
@interface FCFetchedValueDescriptor : NSObject {
    <FCFetchedValueDescriptorObserving> * _observer;
}

@property (nonatomic, readonly) NSArray *inputManagers;
@property <FCFetchedValueDescriptorObserving> *observer;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fastCachedValue;
- (void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)inputManagers;
- (bool)isValue:(id)arg1 equalToValue:(id)arg2;
- (id)observer;
- (void)setObserver:(id)arg1;
- (id)valuePromiseWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2;

@end
