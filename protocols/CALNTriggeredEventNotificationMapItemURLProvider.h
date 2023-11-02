
@protocol CALNTriggeredEventNotificationMapItemURLProvider <NSObject>

@required

- (NSURL *)mapItemURLForOptionalEventLocation:(EKStructuredLocation *)arg1 eventStartDate:(NSDate *)arg2 hypothesis:(EKTravelEngineHypothesis *)arg3;

@end
