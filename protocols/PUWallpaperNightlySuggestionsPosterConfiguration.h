
@protocol PUWallpaperNightlySuggestionsPosterConfiguration <NSObject>

@required

- (bool)includeCityscapes;
- (bool)includeLandscapes;
- (bool)includePets;
- (NSSet *)personLocalIdentifiers;

@end
