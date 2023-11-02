
@interface NTKComplicationProvider : NSObject {
    CLKDevice * _device;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSIndexSet * _lock_disabledComplicationTypes;
    NSHashTable * _lock_observers;
}

@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, readonly, copy) NSIndexSet *disabledComplicationTypes;

+ (id)providerForDevice:(id)arg1;

- (void).cxx_destruct;
- (id)_apricotComplicationsWithOptions:(id)arg1;
- (id)_bundleComplicationsWithOptions:(id)arg1;
- (id)_dateComplicationsWithOptions:(id)arg1;
- (void)_handleAvailableComplicationsChange;
- (id)_remoteComplicationsWithOptions:(id)arg1;
- (void)_resetDisabledTypes;
- (id)complicationsOfType:(unsigned long long)arg1 withOptions:(id)arg2;
- (id)complicationsWithOptions:(id)arg1;
- (id)device;
- (id)disabledComplicationTypes;
- (id)init;
- (bool)isComplicationAvailable:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
