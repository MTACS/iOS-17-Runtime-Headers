
@protocol BPSPublisher <NSObject>

@required

- (void)subscribe:(id <BPSSubscriber>)arg1;

@optional

- (bool)completed;
- (id)nextEvent;
- (void)reset;
- (NSError *)startWithSubscriber:(id <BPSSubscriber>)arg1;
- (NSArray *)upstreamPublishers;

@end
