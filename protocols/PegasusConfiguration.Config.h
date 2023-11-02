
@protocol PegasusConfiguration.Config <NSObject, NSSecureCoding>

@required

- (NSString *)clientName;
- (<_TtP20PegasusConfiguration6Config_> *)findConfigForUserAgent:(NSString *)arg1;
- (NSString *)firstUseDescriptionText;
- (bool)isEnabled;
- (bool)isExpired;
- (NSDictionary *)rawConfig;
- (NSString *)searchURLString;
- (NSString *)userAgent;
- (id)valueForKey:(NSString *)arg1;
- (id)valueForKey:(NSString *)arg1 ofType:(Class)arg2;
- (id)valueForKey:(NSString *)arg1 shouldConsiderOverrides:(bool)arg2;

@end
