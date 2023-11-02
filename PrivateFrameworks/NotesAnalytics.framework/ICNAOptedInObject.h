
@interface ICNAOptedInObject : NSObject

+ (void)disableAnalytics;
+ (bool)isOptedInForAnalytics;

- (id)init;

@end
