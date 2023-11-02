
@protocol SBMainDisplayInterfaceOrientationSource <NSObject>

@required

- (long long)activeInterfaceOrientation;
- (bool)isActive;
- (double)orientationSourceLevel;

@optional

- (NSString *)orientationSourceDescription;

@end
