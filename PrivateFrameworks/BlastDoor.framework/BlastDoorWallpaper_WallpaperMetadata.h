
@interface BlastDoorWallpaper_WallpaperMetadata : NSObject {
    void wallpaper_WallpaperMetadata;
}

@property (nonatomic, readonly) BlastDoorColor *backgroundColor;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorColor *fontColor;
@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) double fontSize;
@property (nonatomic, readonly) double fontWeight;
@property (nonatomic, readonly) bool isVertical;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)description;
- (id)fontColor;
- (id)fontName;
- (double)fontSize;
- (double)fontWeight;
- (id)init;
- (bool)isVertical;
- (long long)type;

@end
