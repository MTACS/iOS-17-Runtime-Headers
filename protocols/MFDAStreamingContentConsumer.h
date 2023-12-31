
@protocol MFDAStreamingContentConsumer <DAMailboxStreamingContentConsumer, NSObject>

@required

- (NSData *)data;
- (bool)didBeginStreaming;
- (bool)succeeded;
- (double)timeOfLastActivity;

@end
