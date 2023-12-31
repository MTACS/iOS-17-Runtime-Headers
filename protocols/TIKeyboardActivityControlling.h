
@protocol TIKeyboardActivityControlling <NSObject>

@required

- (unsigned long long)activityState;
- (void)addActivityObserver:(id <TIKeyboardActivityObserving>)arg1;
- (void)removeActivityObserver:(id <TIKeyboardActivityObserving>)arg1;

@end
