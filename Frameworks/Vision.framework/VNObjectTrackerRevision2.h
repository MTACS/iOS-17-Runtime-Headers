
@interface VNObjectTrackerRevision2 : VNObjectTracker

+ (id)rpnInitQueue;
+ (id)rpnTrackQueue;
+ (id)rpnTrackerInitModelName;
+ (id)rpnTrackerInitProcessingQueueName;
+ (id)rpnTrackerTrackModelName;
+ (id)rpnTrackerTrackProcessingQueueName;
+ (id)serializeRPNInitializationQueue;
+ (id)serializeRPNTrackingQueue;
+ (id)supportedComputeDevicesForOptions:(id)arg1 error:(id*)arg2;

- (id)initWithOptions:(id)arg1 error:(id*)arg2;

@end
