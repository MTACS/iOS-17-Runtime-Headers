
@interface CNAsynchronousCacheEntryDelegateObservable : CNObservable <CNAsynchronousCacheEntryDelegate> {
    id  _currentValue;
    NSMutableArray * _observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cacheEntryDidUpdateValue:(id)arg1;
- (id)init;
- (void)removeObserver:(id)arg1;
- (id)subscribe:(id)arg1;

@end
