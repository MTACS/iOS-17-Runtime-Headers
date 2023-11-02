
@protocol ATXNotificationGroupRankerProtocol <NSObject>

@required

+ (NSString *)rankerId;

- (NSArray *)rankNotificationGroups:(NSArray *)arg1 modeId:(NSString *)arg2;

@end
