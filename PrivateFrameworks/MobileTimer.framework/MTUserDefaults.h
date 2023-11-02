
@interface MTUserDefaults : NSObject {
    NSMutableDictionary * _observers;
    <NAScheduler> * _serializer;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, retain) NSMutableDictionary *observers;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (nonatomic, retain) NSUserDefaults *userDefaults;

+ (id)_distributedNotificationForLocalNotification:(id)arg1;
+ (id)_localNotificationForDistributedNotification:(id)arg1;
+ (id)sharedUserDefaults;

- (void).cxx_destruct;
- (void)_cleanupObserversForNotification:(id)arg1;
- (void)_postNotification:(id)arg1;
- (bool)boolForKey:(id)arg1;
- (bool)boolForKey:(id)arg1 exists:(bool*)arg2;
- (void)distributedNotificationPosted:(id)arg1;
- (float)floatForKey:(id)arg1;
- (float)floatForKey:(id)arg1 exists:(bool*)arg2;
- (id)initWithUserDefaults:(id)arg1;
- (long long)integerForKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)integerForKey:(id)arg1 exists:(bool*)arg2;
- (long long)integerForKey:(id)arg1 isValid:(id /* block */)arg2 defaultValue:(long long)arg3;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 defaultValue:(id)arg2;
- (id)observers;
- (void)registerNotification:(id)arg1 observer:(id)arg2;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)serializer;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setBool:(bool)arg1 forKey:(id)arg2 notification:(id)arg3;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2 notification:(id)arg3;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2 notification:(id)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 notification:(id)arg3;
- (void)setObservers:(id)arg1;
- (void)setSerializer:(id)arg1;
- (void)setTimeInterval:(double)arg1 forKey:(id)arg2;
- (void)setTimeInterval:(double)arg1 forKey:(id)arg2 notification:(id)arg3;
- (void)setUserDefaults:(id)arg1;
- (void)synchronize;
- (double)timeIntervalForKey:(id)arg1 defaultValue:(double)arg2;
- (double)timeIntervalForKey:(id)arg1 exists:(bool*)arg2;
- (double)timeIntervalForKey:(id)arg1 isValid:(id /* block */)arg2 defaultValue:(double)arg3;
- (void)unregisterNotification:(id)arg1 observer:(id)arg2;
- (id)userDefaults;

@end
