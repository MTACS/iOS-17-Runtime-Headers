
@interface CRXUNotificationCenter : NSObject

+ (id)sharedInstance;

- (int)addBlockObserver:(id /* block */)arg1 queue:(id)arg2 name:(id)arg3;
- (int)addObserver:(id)arg1 selector:(SEL)arg2 queue:(id)arg3 name:(id)arg4;
- (void)postNotificationName:(id)arg1;
- (void)removeObserver:(int)arg1;

@end
