
@interface SBEventObserverRegistry : NSObject {
    NSMutableDictionary * _observers;
    void * _provider;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addObserverWithToken:(unsigned long long)arg1 forEvent:(id)arg2;
- (void)handleEvent:(id)arg1 token:(unsigned long long)arg2 action:(long long)arg3;
- (void)postEventToInterestedObservers:(struct __CFString { }*)arg1;
- (void)removeObserverWithToken:(unsigned long long)arg1 forEvent:(id)arg2;
- (void)setValue:(bool)arg1 forState:(struct __CFString { }*)arg2;

@end
