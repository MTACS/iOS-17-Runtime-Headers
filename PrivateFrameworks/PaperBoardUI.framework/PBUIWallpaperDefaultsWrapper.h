
@interface PBUIWallpaperDefaultsWrapper : NSObject {
    NSData * _colorData;
    NSString * _colorName;
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
    NSData * _gradientData;
    bool  _hasVideo;
    NSData * _imageHashData;
    bool  _magnifyEnabled;
    double  _parallaxFactor;
    bool  _portrait;
    double  _stillTimeInVideo;
    bool  _supportsCropping;
    NSString * _wallpaperIdentifier;
    NSDictionary * _wallpaperKitData;
    long long  _wallpaperMode;
    NSString * _wallpaperName;
    NSDictionary * _wallpaperOptions;
    bool  _wallpaperWasUserSet;
    double  _zoomScale;
}

@property (nonatomic, retain) NSData *colorData;
@property (nonatomic, retain) NSString *colorName;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (nonatomic, retain) NSData *gradientData;
@property (nonatomic) bool hasVideo;
@property (nonatomic, retain) NSData *imageHashData;
@property (nonatomic) bool magnifyEnabled;
@property (nonatomic) double parallaxFactor;
@property (nonatomic) bool portrait;
@property (nonatomic) double stillTimeInVideo;
@property (nonatomic) bool supportsCropping;
@property (nonatomic, retain) NSString *wallpaperIdentifier;
@property (nonatomic, retain) NSDictionary *wallpaperKitData;
@property (nonatomic) long long wallpaperMode;
@property (nonatomic, retain) NSString *wallpaperName;
@property (nonatomic, retain) NSDictionary *wallpaperOptions;
@property (nonatomic) bool wallpaperWasUserSet;
@property (nonatomic) double zoomScale;

+ (id)homeScreenWrapperForLegacyDefaults:(id)arg1;
+ (id)lockScreenWrapperForLegacyDefaults:(id)arg1;

- (void).cxx_destruct;
- (id)colorData;
- (id)colorName;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (id)gradientData;
- (bool)hasVideo;
- (id)imageHashData;
- (id)initWithWallpaperDefaultsDict:(id)arg1;
- (bool)magnifyEnabled;
- (double)parallaxFactor;
- (bool)portrait;
- (void)setColorData:(id)arg1;
- (void)setColorName:(id)arg1;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGradientData:(id)arg1;
- (void)setHasVideo:(bool)arg1;
- (void)setImageHashData:(id)arg1;
- (void)setMagnifyEnabled:(bool)arg1;
- (void)setParallaxFactor:(double)arg1;
- (void)setPortrait:(bool)arg1;
- (void)setStillTimeInVideo:(double)arg1;
- (void)setSupportsCropping:(bool)arg1;
- (void)setWallpaperIdentifier:(id)arg1;
- (void)setWallpaperKitData:(id)arg1;
- (void)setWallpaperMode:(long long)arg1;
- (void)setWallpaperName:(id)arg1;
- (void)setWallpaperOptions:(id)arg1;
- (void)setWallpaperWasUserSet:(bool)arg1;
- (void)setZoomScale:(double)arg1;
- (double)stillTimeInVideo;
- (bool)supportsCropping;
- (id)wallpaperDefaultsDict;
- (id)wallpaperIdentifier;
- (id)wallpaperKitData;
- (long long)wallpaperMode;
- (id)wallpaperName;
- (id)wallpaperOptions;
- (bool)wallpaperWasUserSet;
- (double)zoomScale;

@end
