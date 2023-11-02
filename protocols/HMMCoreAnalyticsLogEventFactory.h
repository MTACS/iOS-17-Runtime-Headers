
@protocol HMMCoreAnalyticsLogEventFactory <NSObject>

@required

- (HMMLogEvent *)logEventForTaggedEvent:(HMMTaggedEvent *)arg1;
- (NSArray *)supportedTags;

@end
