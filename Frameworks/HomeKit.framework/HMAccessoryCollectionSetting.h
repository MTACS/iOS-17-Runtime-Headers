
@interface HMAccessoryCollectionSetting : HMAccessorySetting <NSFastEnumeration>

@property (readonly, copy) NSSet *itemValueClasses;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)itemValueClassesForKeyPath:(id)arg1;
+ (void)removeItemValueClassesForKeyPath:(id)arg1;
+ (void)setItemValueClass:(Class)arg1 forKeyPath:(id)arg2;
+ (void)setItemValueClasses:(id)arg1 forKeyPath:(id)arg2;

- (void)_setting:(id)arg1 didAddConstraint:(id)arg2;
- (void)_setting:(id)arg1 didRemoveConstraint:(id)arg2;
- (void)addItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)initWithInternal:(id)arg1;
- (id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3;
- (id)itemValueClasses;
- (void)removeItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)replaceItem:(id)arg1 withItem:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)replaceItems:(id)arg1 withItems:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setItemValueClass:(Class)arg1;
- (void)setItemValueClasses:(id)arg1;
- (void)updateValue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)value;
- (Class)valueClass;

// Image: /System/Library/PrivateFrameworks/CoordinationCore.framework/CoordinationCore

- (void)co_addAlarm:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)co_alarms;
- (id)co_cachedWrite;
- (void)co_enqueueOperation:(id)arg1;
- (void)co_flushQueue;
- (id)co_mappedAlarms;
- (id)co_rawAlarms;
- (void)co_removeAlarm:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)co_setCachedWrite:(id)arg1;
- (void)co_setMappedAlarms:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)co_updateAlarm:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)co_withLock:(id /* block */)arg1;

@end
