
@protocol MKPlaceBatchConsumer <NSObject>

@required

- (void)shouldConsumeBatch:(bool)arg1 fetchedBatch:(NSArray *)arg2;

@optional

- (void)didStartFetchingBatch;

@end
