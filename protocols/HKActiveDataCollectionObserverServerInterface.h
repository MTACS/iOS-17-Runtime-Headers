
@protocol HKActiveDataCollectionObserverServerInterface <NSObject>

@required

- (void)remote_subscribeForQuantityTypes:(NSArray *)arg1;
- (void)remote_unsubscribeForQuantityTypes:(NSArray *)arg1;

@end
