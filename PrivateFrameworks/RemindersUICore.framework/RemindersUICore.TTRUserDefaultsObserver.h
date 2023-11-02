
@interface RemindersUICore.TTRUserDefaultsObserver : NSObject <REMUserDefaultsObserveToken> {
    void block;
    void removed;
    void userDefaults;
    void userDefaultsKey;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)stopObserving;

@end
