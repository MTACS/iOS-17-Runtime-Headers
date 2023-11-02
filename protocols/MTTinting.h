
@protocol MTTinting <NSObject>

@required

- (double)tintAlpha;
- (struct CGColor { }*)tintColor;
- (NSDictionary *)tintColorDescription;
- (NSString *)tintColorName;
- (long long)tintColorUIStyle;

@end
