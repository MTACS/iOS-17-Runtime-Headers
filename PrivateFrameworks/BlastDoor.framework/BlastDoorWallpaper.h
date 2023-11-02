
@interface BlastDoorWallpaper : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  wallpaper;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *highResFileName;
@property (nonatomic, readonly) BlastDoorWallpaper_WallpaperImage *highResImage;
@property (nonatomic, readonly) NSString *lowResFileName;
@property (nonatomic, readonly) BlastDoorWallpaper_WallpaperImage *lowResImage;
@property (nonatomic, readonly) BlastDoorWallpaper_WallpaperMetadata *metadata;
@property (nonatomic, readonly) NSData *posterArchive;
@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) NSData *wallpaperPassthroughData;

- (void).cxx_destruct;
- (id)description;
- (id)highResFileName;
- (id)highResImage;
- (id)init;
- (id)lowResFileName;
- (id)lowResImage;
- (id)metadata;
- (id)posterArchive;
- (long long)version;
- (id)wallpaperPassthroughData;

@end
