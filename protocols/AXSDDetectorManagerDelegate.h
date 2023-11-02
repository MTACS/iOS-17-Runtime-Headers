
@protocol AXSDDetectorManagerDelegate <NSObject>

@required

- (void)receivedCompletion:(SNDetectSoundRequest *)arg1;
- (void)receivedError:(NSError *)arg1 fromDetector:(SNDetectSoundRequest *)arg2;
- (void)receivedObservation:(SNDetectionResult *)arg1 forDetector:(SNDetectSoundRequest *)arg2;

@end
