
@interface REMChangedKeysObserver : NSObject {
    NSArray * _keysToObserve;
    NSMutableSet * _mutableChangedKeys;
    NSObject * _target;
}

@property (nonatomic, readonly) NSSet *changedKeys;
@property (nonatomic, retain) NSArray *keysToObserve;
@property (nonatomic, retain) NSMutableSet *mutableChangedKeys;
@property (nonatomic, readonly) NSObject *target;

- (void).cxx_destruct;
- (id)changedKeys;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 keysToObserve:(id)arg2 includeInitial:(bool)arg3;
- (void)keyDidChange:(id)arg1;
- (id)keysToObserve;
- (id)mutableChangedKeys;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setKeysToObserve:(id)arg1;
- (void)setMutableChangedKeys:(id)arg1;
- (id)target;

@end
