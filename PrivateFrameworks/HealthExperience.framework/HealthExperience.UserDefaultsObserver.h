
@interface HealthExperience.UserDefaultsObserver : NSObject {
    void currentValue;
    void key;
    void userDefaults;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
