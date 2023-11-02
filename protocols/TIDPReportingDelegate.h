
@protocol TIDPReportingDelegate <NSObject>

@required

- (bool)record:(NSArray *)arg1;

@optional

- (bool)record:(NSArray *)arg1 metadata:(NSDictionary *)arg2;
- (bool)recordNumbersVectors:(NSArray *)arg1 metadata:(NSDictionary *)arg2;
- (bool)recordTokenFrequency:(NSDictionary *)arg1 withLocale:(NSString *)arg2 withTokenType:(NSString *)arg3;

@end
