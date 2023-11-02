
@protocol WKWallpaperPosterEditingLook <NSObject>

@required

- (NSString *)displayName;
- (NSString *)identifier;
- (id)initWithDisplayName:(NSString *)arg1;
- (id)initWithIdentifier:(NSString *)arg1 displayName:(NSString *)arg2;

@end
