
@interface FCFetchedValueManager : NSObject <FCBoostableOperationThrottlerDelegate, FCFetchedValueDescriptorObserving, FCFetchedValueManager, FCFetchedValueManagerObserving> {
    FCFetchedValueDescriptor * _descriptor;
    FCFetchedValueObservable * _observable;
    FCBoostableOperationThrottler * _operationThrottler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) FCFetchedValueDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FCFetchedValueObservable *observable;
@property (nonatomic, readonly) FCBoostableOperationThrottler *operationThrottler;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <NFCopying> *value;

- (void).cxx_destruct;
- (unsigned long long)_cachePolicyForOptions:(unsigned long long)arg1;
- (unsigned long long)_optionsForCachePolicy:(unsigned long long)arg1;
- (id)_updateDependentManagersPromiseWithQualityOfService:(long long)arg1;
- (void)addObserver:(id)arg1;
- (id)descriptor;
- (void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(id /* block */)arg3;
- (void)fetchValueWithQualityOfService:(long long)arg1 completion:(id /* block */)arg2;
- (void)fetchedObjectManager:(id)arg1 valueDidChange:(id)arg2;
- (void)fetchedValueDescriptorValueIsDirty:(id)arg1;
- (id)init;
- (id)initWithDescriptor:(id)arg1;
- (id)observable;
- (id)operationThrottler;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithQualityOfService:(long long)arg2 completion:(id /* block */)arg3;
- (void)removeObserver:(id)arg1;
- (id)value;
- (id)valuePromiseWithQualityOfService:(long long)arg1;

@end
