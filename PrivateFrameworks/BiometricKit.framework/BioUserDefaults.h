
@interface BioUserDefaults : NSObject {
    NSMutableDictionary * _registeredDefaults;
    NSMutableArray * _updateBlocks;
}

+ (id)preferenceObjectForKey:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)boolForKey:(id)arg1;
- (int)intForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (id)numberForKey:(id)arg1;
- (id)objectOfClass:(Class)arg1 forKey:(id)arg2;
- (void)registerDefaults:(id)arg1;
- (void)registerUpdateNotification:(id /* block */)arg1;
- (bool)setBool:(bool)arg1 forKey:(id)arg2;
- (bool)setObject:(id)arg1 forKey:(id)arg2;
- (id)stateDictionary;
- (id)stringForKey:(id)arg1;
- (bool)synchronize;
- (void)unregisterUpdateNotification:(id /* block */)arg1;
- (unsigned int)unsignedIntForKey:(id)arg1;
- (unsigned long long)unsignedIntegerForKey:(id)arg1;
- (void)updateNotification;

@end
