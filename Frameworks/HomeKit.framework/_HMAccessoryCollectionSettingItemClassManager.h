
@interface _HMAccessoryCollectionSettingItemClassManager : NSObject {
    NSMutableDictionary * _classes;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

+ (id)defaultItemValueClasses;
+ (id)sharedManager;

- (void).cxx_destruct;
- (bool)hasCustomItemValueClassesForKeyPath:(id)arg1;
- (id)init;
- (id)itemValueClassesForKeyPath:(id)arg1;
- (void)removeItemValueClassesForKeyPath:(id)arg1;
- (void)setItemValueClasses:(id)arg1 forKeyPath:(id)arg2;

@end
