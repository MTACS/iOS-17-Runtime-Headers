
@protocol PXStoryMutableProducerMonitor

@required

- (float)estimatedFractionCompletedPlaybackSpeed;
- (void)producerDidProduceResult:(PXStoryProducerResult *)arg1;
- (void)reset;
- (void)setEstimatedFractionCompletedPlaybackSpeed:(float)arg1;

@end
