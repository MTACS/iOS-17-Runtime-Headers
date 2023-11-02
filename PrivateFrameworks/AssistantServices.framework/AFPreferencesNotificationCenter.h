
@interface AFPreferencesNotificationCenter : NSNotificationCenter {
    NSMutableDictionary * darwinRegistrationsByName;
    NSMutableDictionary * darwinRegistrationsByObserver;
    NSLock * instanceLock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)addObserverForDarwinName:(struct __CFString { }*)arg1 usingBlock:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (void)removeObserver:(id)arg1;

@end
