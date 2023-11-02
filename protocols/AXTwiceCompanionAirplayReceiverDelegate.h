
@protocol AXTwiceCompanionAirplayReceiverDelegate <NSObject>

@required

- (void)airplayDidStartStreamingWithMirroringLayer:(CALayer *)arg1;
- (void)airplayDidStopStreaming;

@end
