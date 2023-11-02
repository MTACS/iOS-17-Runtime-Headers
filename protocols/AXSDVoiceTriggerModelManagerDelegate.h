
@protocol AXSDVoiceTriggerModelManagerDelegate <NSObject>

@required

- (void)listeningStoppedWithError:(NSError *)arg1;
- (void)receivedError:(NSError *)arg1 fromDetector:(SNDetectSoundRequest *)arg2;
- (void)receivedObservation:(SNVoiceTriggerResult *)arg1 forDetector:(SNDetectSoundRequest *)arg2;

@end
