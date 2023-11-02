
@protocol PUWallpaperEditingLook <NSObject>

@required

- (NSString *)displayName;
- (NSString *)identifier;
- (id)initWithDisplayName:(NSString *)arg1;
- (id)initWithIdentifier:(NSString *)arg1 displayName:(NSString *)arg2;
- (unsigned long long)pu_timeAppearance;
- (PRPosterColor *)pu_timeFontColor;
- (NSString *)pu_timeFontIdentifier;

@end
