
@protocol PUAirPlayScreenReceiver <NSObject>

@required

- (void)screenDetector:(PUAirPlayScreenDetector *)arg1 didDetectScreen:(PUAirPlayScreen *)arg2;
- (void)screenDetector:(PUAirPlayScreenDetector *)arg1 didLoseScreen:(PUAirPlayScreen *)arg2;

@end
