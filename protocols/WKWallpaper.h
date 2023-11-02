
@protocol WKWallpaper <WKThumbnailRepresentable>

@required

- (unsigned long long)backingType;
- (bool)copyWallpaperContentsToDestinationDirectoryURL:(NSURL *)arg1 error:(id*)arg2;
- (long long)identifier;
- (NSString *)name;
- (NSDictionary *)propertyListRepresentation;
- (unsigned long long)representedType;
- (bool)supportsCopying;
- (bool)supportsSerialization;
- (unsigned long long)type;

@end
