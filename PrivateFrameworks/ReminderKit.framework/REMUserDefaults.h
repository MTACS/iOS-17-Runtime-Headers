
@interface REMUserDefaults : NSObject {
    NSMutableDictionary * _observers;
    bool  _showRemindersAsOverdue_cached;
    NSString * _suiteName;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, readonly) NSMutableDictionary *observers;
@property (nonatomic) bool showRemindersAsOverdue_cached;
@property (nonatomic, readonly) NSString *suiteName;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;

+ (id)appGroupUserDefaults;
+ (id)daemonUserDefaults;

- (void).cxx_destruct;
- (id)_addObserverForKey:(id)arg1 block:(id /* block */)arg2;
- (void)_removeObserver:(id)arg1;
- (id)_startObservingValuesForKey:(id)arg1 block:(id /* block */)arg2;
- (id)_startStreamingValuesForKey:(id)arg1 block:(id /* block */)arg2;
- (id)initWithSuiteName:(id)arg1 containerURL:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observers;
- (void)setShowRemindersAsOverdue_cached:(bool)arg1;
- (bool)showRemindersAsOverdue_cached;
- (id)suiteName;
- (id)userDefaults;

@end
