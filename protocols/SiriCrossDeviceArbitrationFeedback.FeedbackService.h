
@protocol SiriCrossDeviceArbitrationFeedback.FeedbackService

@required

+ (NSURL *)receivedArbitrationsDirectoryURL;

- (void)add:(SCDAFParticipation *)arg1;

@end
