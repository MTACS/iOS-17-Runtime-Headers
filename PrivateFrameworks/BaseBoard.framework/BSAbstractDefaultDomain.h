
@interface BSAbstractDefaultDomain : NSObject {
    bool  _boundDefaults;
    NSMutableDictionary * _defaultKeyToDefaultValue;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSMutableSet * _observerQueue_observers;
    NSUserDefaults * _userDefaults;
}

+ (bool)__useDynamicMethodResolution;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_bindAndRegisterDefaults;
- (void)_bindProperty:(id)arg1 withDefaultKey:(id)arg2;
- (void)_bindProperty:(id)arg1 withDefaultKey:(id)arg2 toDefaultValue:(id)arg3;
- (void)_bindProperty:(id)arg1 withDefaultKey:(id)arg2 toDefaultValue:(id)arg3 options:(unsigned long long)arg4;
- (id)_initWithDefaults:(id)arg1;
- (id)_initWithDomain:(id)arg1;
- (void)_setUserDefaults:(id)arg1;
- (id)_store;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)observeDefault:(id)arg1 onQueue:(id)arg2 withBlock:(id /* block */)arg3;
- (id)observeDefaults:(id)arg1 onQueue:(id)arg2 withBlock:(id /* block */)arg3;
- (void)resetAllDefaults;
- (void)synchronizeDefaults;

@end
