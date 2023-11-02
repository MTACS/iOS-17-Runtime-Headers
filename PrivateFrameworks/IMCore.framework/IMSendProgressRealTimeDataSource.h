
@interface IMSendProgressRealTimeDataSource : NSObject <IMSendProgressTimeDataSource>

@property (readonly) double timeIntervalSinceReferenceDate;

- (double)timeIntervalSinceReferenceDate;

@end
