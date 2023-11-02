
@protocol VUIJSNotificationCenter <JSExport>

@required

- (NSArray *)badgeData;
- (void)clearBadgeData;
- (void)post:(NSString *)arg1 :(NSString *)arg2 :(NSString *)arg3 :(NSDictionary *)arg4;
- (void)setBadgeNumber:(NSNumber *)arg1;
- (void)setBadgeString:(NSString *)arg1;

@end
