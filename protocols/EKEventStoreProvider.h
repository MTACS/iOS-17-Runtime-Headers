
@protocol EKEventStoreProvider <NSObject>

@required

- (EKEventStore *)eventStore;

@end
