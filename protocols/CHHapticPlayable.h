
@protocol CHHapticPlayable <NSObject>

@required

- (NSString *)audioPowerUsage;
- (double)duration;
- (NSArray *)events;
- (NSString *)hapticPowerUsage;
- (NSString *)locality;
- (NSArray *)parameterCurves;
- (NSArray *)parameters;
- (NSString *)patternID;
- (NSString *)priority;
- (NSArray *)resolveExternalResources:(CHHapticEngine *)arg1 error:(id*)arg2;
- (NSString *)usageCategory;

@end
