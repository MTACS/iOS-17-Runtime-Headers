
@protocol JFXAnalytics <NSObject>

@required

- (void)trackEventWithName:(NSString *)arg1;
- (void)trackKey:(NSString *)arg1 withPayload:(NSDictionary *)arg2;

@end
