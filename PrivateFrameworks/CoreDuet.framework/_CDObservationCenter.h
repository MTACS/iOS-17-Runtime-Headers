
@interface _CDObservationCenter : NSObject {
    NSMapTable * _senderToNotificationObserverObservers;
    NSMapTable * _senderToNotificationObservers;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 queue:(id)arg4 usingBlock:(id /* block */)arg5;
- (void)addObserver:(id)arg1 name:(id)arg2 sender:(id)arg3 queue:(id)arg4 usingSelector:(SEL)arg5;
- (void)addObserverChangesObserver:(id)arg1 onName:(id)arg2 queue:(id)arg3 usingBlock:(id /* block */)arg4;
- (void)addObserverChangesObserver:(id)arg1 onName:(id)arg2 queue:(id)arg3 usingSelector:(SEL)arg4;
- (id)init;
- (unsigned long long)observerCountOnName:(id)arg1;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2 sender:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 name:(id)arg2;
- (void)removeObserver:(id)arg1 name:(id)arg2 sender:(id)arg3;
- (void)removeObserverChangesObserver:(id)arg1 onName:(id)arg2;

@end
