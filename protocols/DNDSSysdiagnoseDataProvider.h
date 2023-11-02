
@protocol DNDSSysdiagnoseDataProvider <NSObject>

@required

- (NSDictionary *)sysdiagnoseDataForDate:(NSDate *)arg1 redacted:(bool)arg2;
- (NSString *)sysdiagnoseDataIdentifier;

@end
