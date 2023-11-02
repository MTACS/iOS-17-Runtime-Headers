
@interface CNSharedProfile : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    NSData * _imageData;
    NSString * _imageType;
    NSData * _thumbnailImageData;
    CNWallpaper * _wallpaper;
    NSData * _watchWallpaperImageData;
}

@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic, retain) NSString *imageType;
@property (nonatomic, retain) NSData *thumbnailImageData;
@property (nonatomic, retain) CNWallpaper *wallpaper;
@property (nonatomic, retain) NSData *watchWallpaperImageData;

+ (id)log;

- (void).cxx_destruct;
- (id)contact;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (id)imageData;
- (id)imageType;
- (id)imageTypeStringFromContactImage:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithNickname:(id)arg1;
- (id)initWithRecentContactImage:(id)arg1 recentPoster:(id)arg2;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImageData:(id)arg1;
- (void)setImageType:(id)arg1;
- (void)setThumbnailImageData:(id)arg1;
- (void)setWallpaper:(id)arg1;
- (void)setWatchWallpaperImageData:(id)arg1;
- (id)thumbnailImageData;
- (id)thumbnailImageDataFromImageData:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)wallpaper;
- (id)watchWallpaperImageData;

@end
