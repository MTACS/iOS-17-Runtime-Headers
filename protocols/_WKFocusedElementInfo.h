
@protocol _WKFocusedElementInfo <NSObject>

@required

- (bool)isUserInitiated;
- (NSString *)label;
- (NSString *)placeholder;
- (long long)type;
- (NSObject<NSSecureCoding> *)userObject;
- (NSString *)value;

@end
