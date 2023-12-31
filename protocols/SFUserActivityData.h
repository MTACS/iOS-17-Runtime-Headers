
@protocol SFUserActivityData <NSObject>

@required

- (NSString *)activityType;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setActivityType:(NSString *)arg1;
- (void)setUserInfo:(NSArray *)arg1;
- (NSArray *)userInfo;

@end
