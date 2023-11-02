
@protocol AXSDKShotModelManagerDelegate <NSObject>

@required

- (void)receivedCompletion:(SNClassifySoundRequest *)arg1;
- (void)receivedError:(NSError *)arg1 fromDetector:(SNClassifySoundRequest *)arg2;
- (void)receivedObservation:(SNClassificationResult *)arg1 forDetector:(SNClassifySoundRequest *)arg2;

@end
