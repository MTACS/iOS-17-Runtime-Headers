
@protocol IAMImpressionManagerDelegate <NSObject>

@required

- (void)impressionManager:(IAMImpressionManager *)arg1 impressionDidEndForMessageEntry:(ICInAppMessageEntry *)arg2;
- (void)impressionManager:(IAMImpressionManager *)arg1 shouldReportImpressionEventWithDictionary:(NSDictionary *)arg2;

@end
