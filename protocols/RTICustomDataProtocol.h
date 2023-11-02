
@protocol RTICustomDataProtocol <NSObject>

@required

+ (void)registerCustomInfoClasses:(NSSet *)arg1 forType:(NSString *)arg2;
+ (void)unregisterCustomInfoType:(NSString *)arg1;

- (NSObject<NSSecureCoding> *)customInfo;
- (NSString *)customInfoType;
- (void)setCustomInfo:(NSObject<NSSecureCoding> *)arg1;
- (void)setCustomInfoType:(NSString *)arg1;

@end
