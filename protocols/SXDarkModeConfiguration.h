
@protocol SXDarkModeConfiguration <NSObject>

@required

- (NSDictionary *)colors;
- (unsigned long long)inversionBehavior;
- (bool)isAutoDarkModeEnabled;
- (double)saturationThreshold;

@end
