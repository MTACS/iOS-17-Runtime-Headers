
@protocol PRDateProviding <NSObject>

@required

- (void)addMinuteUpdateObserver:(id <PRDateObserving>)arg1;
- (NSDate *)date;
- (void)removeMinuteUpdateObserver:(id <PRDateObserving>)arg1;

@end
