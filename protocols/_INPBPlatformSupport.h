
@protocol _INPBPlatformSupport <NSObject>

@required

- (int)StringAsSupportedPlatform:(NSString *)arg1;
- (bool)hasMinimumOsVersion;
- (bool)hasSupportedPlatform;
- (NSString *)minimumOsVersion;
- (void)setHasSupportedPlatform:(bool)arg1;
- (void)setMinimumOsVersion:(NSString *)arg1;
- (void)setSupportedPlatform:(int)arg1;
- (int)supportedPlatform;
- (NSString *)supportedPlatformAsString:(int)arg1;

@end
