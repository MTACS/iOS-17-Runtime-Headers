
@protocol NSObserver <NSObject>

@optional

- (void)finishObserving;
- (void)receiveObservedError:(NSError *)arg1;
- (void)receiveObservedValue:(id)arg1;

@end
