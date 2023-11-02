
@protocol NSObservable <NSObject>

@optional

- (NSObservation<NSObservable><NSObserver> *)addObserver:(id <NSObserver>)arg1;
- (void)finishObserving;
- (void)receiveObservedError:(NSError *)arg1;
- (void)receiveObservedValue:(id)arg1;
- (void)removeObservation:(NSObservation *)arg1;

@end
