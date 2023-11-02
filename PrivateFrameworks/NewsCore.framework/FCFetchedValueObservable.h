
@interface FCFetchedValueObservable : NSObject {
    id /* block */  _equalityTest;
    NSError * _error;
    NFUnfairLock * _lock;
    <FCFetchedValueManager> * _manager;
    NSHashTable * _observers;
    <NFCopying> * _value;
}

@property (nonatomic, readonly, copy) id /* block */ equalityTest;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, readonly) NFUnfairLock *lock;
@property (nonatomic, readonly) <FCFetchedValueManager> *manager;
@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic, copy) <NFCopying> *value;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id /* block */)equalityTest;
- (id)error;
- (void)handleError:(id)arg1;
- (id)init;
- (id)initWithManager:(id)arg1 initialValue:(id)arg2 equalityTest:(id /* block */)arg3;
- (id)lock;
- (id)manager;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setError:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (id)valueWithError:(id*)arg1;

@end
