
@interface PXUbiquitousKeyValueStoreValueAccessor : NSObject {
    id  _cachedValue;
    id /* block */  _changeHandler;
    id /* block */  _defaultValueFuture;
    NSString * _key;
    NSObject<OS_dispatch_queue> * _storeQueue;
    NSUbiquitousKeyValueStore * _ubiquitousKeyValueStore;
    id /* block */  _valueFilter;
}

@property (retain) id currentValue;
@property (readonly) id currentValueIfLoaded;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *storeQueue;
@property (nonatomic, readonly) NSUbiquitousKeyValueStore *ubiquitousKeyValueStore;

+ (id)_defaultQueue;

- (void).cxx_destruct;
- (id)_currentValueLoadIfNeeded:(bool)arg1;
- (void)_keyValueStoreDidChangeExternally:(id)arg1;
- (void)_setCurrentValue:(id)arg1 updateUbiquitousKeyValueStore:(bool)arg2 notifyChange:(bool)arg3;
- (void)_storeQueue_handleLoadValueAsync;
- (id)currentValue;
- (id)currentValueIfLoaded;
- (id)description;
- (id)init;
- (id)initWithUbiquitousKeyValueStore:(id)arg1 key:(id)arg2 defaultValueFuture:(id /* block */)arg3 valueFilter:(id /* block */)arg4 changeHandler:(id /* block */)arg5;
- (id)key;
- (void)loadValueAsyncIfNeeded;
- (void)setCurrentValue:(id)arg1;
- (id)storeQueue;
- (id)ubiquitousKeyValueStore;

@end
