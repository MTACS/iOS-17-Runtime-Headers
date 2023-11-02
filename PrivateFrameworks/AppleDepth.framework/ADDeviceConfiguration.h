
@interface ADDeviceConfiguration : NSObject {
    NSUserDefaults * _appleDepthUserDefaults;
    NSMutableDictionary * _currentDefaults;
    NSUserDefaults * _globalUserDefaults;
    bool  _ignoreValueUpdate;
}

+ (bool)boolForKey:(id)arg1;
+ (bool)deviceList:(id)arg1 containsDeviceName:(id)arg2;
+ (double)doubleForKey:(id)arg1;
+ (float)floatForKey:(id)arg1;
+ (id)getDefaultConfiguration;
+ (id)getDeviceName;
+ (unsigned long long)getLidarType:(id)arg1;
+ (long long)integerForKey:(id)arg1;
+ (bool)isInternalBuild;
+ (id)listForKey:(id)arg1;
+ (id)numberForKey:(id)arg1;
+ (id)sharedConfiguration;
+ (id)stringForKey:(id)arg1;

- (void).cxx_destruct;
- (bool)createPropertyForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)updateValue:(id)arg1 forKey:(id)arg2;

@end
