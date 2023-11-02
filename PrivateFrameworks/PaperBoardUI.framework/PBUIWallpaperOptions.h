
@interface PBUIWallpaperOptions : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {
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
    bool  _hasVideo;
    bool  _magnifyEnabled;
    NSString * _name;
    double  _parallaxFactor;
    bool  _portrait;
    double  _rotationAngle;
    double  _stillTimeInVideo;
    bool  _supportsCropping;
    bool  _supportsRotation;
    NSDictionary * _wallpaperKitData;
    long long  _wallpaperMode;
    long long  _wallpaperStatus;
    double  _zoomScale;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasVideo;
@property (readonly) unsigned long long hash;
@property (getter=isMagnifyEnabled, nonatomic) bool magnifyEnabled;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) bool parallaxEnabled;
@property (nonatomic) double parallaxFactor;
@property (nonatomic, readonly, copy) NSData *persistentDataRepresentation;
@property (getter=isPortrait, nonatomic) bool portrait;
@property (nonatomic) double rotationAngle;
@property (nonatomic) double stillTimeInVideo;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsCropping;
@property (nonatomic) bool supportsRotation;
@property (nonatomic, copy) NSDictionary *wallpaperKitData;
@property (nonatomic) long long wallpaperMode;
@property (nonatomic) long long wallpaperStatus;
@property (nonatomic) double zoomScale;

+ (id)optionsWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(bool)arg4 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 portrait:(bool)arg6;
+ (id)optionsWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(bool)arg4 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 portrait:(bool)arg6 hasVideo:(bool)arg7 stillTimeInVideo:(double)arg8;
+ (id)optionsWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(bool)arg4 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 portrait:(bool)arg6 hasVideo:(bool)arg7 stillTimeInVideo:(double)arg8 wallpaperKitData:(id)arg9;
+ (id)optionsWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(bool)arg4 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 portrait:(bool)arg6 hasVideo:(bool)arg7 stillTimeInVideo:(double)arg8 wallpaperMode:(long long)arg9 wallpaperStatus:(long long)arg10;
+ (id)optionsWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(bool)arg4 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 portrait:(bool)arg6 hasVideo:(bool)arg7 stillTimeInVideo:(double)arg8 wallpaperMode:(long long)arg9 wallpaperStatus:(long long)arg10 wallpaperKitData:(id)arg11;
+ (id)optionsWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(bool)arg4 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 supportsRotation:(bool)arg6 rotationAngle:(double)arg7 portrait:(bool)arg8 hasVideo:(bool)arg9 stillTimeInVideo:(double)arg10 wallpaperMode:(long long)arg11 wallpaperStatus:(long long)arg12;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })bestWallpaperSizeForWallpaperSize:(struct CGSize { double x1; double x2; })arg1 wallpaperScale:(double)arg2 deviceType:(long long)arg3 imageScale:(double)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasVideo;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithName:(id)arg1 parallaxFactor:(double)arg2 zoomScale:(double)arg3 supportsCropping:(bool)arg4 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 supportsRotation:(bool)arg6 rotationAngle:(double)arg7 portrait:(bool)arg8 hasVideo:(bool)arg9 stillTimeInVideo:(double)arg10 wallpaperMode:(long long)arg11 wallpaperStatus:(long long)arg12 wallpaperKitData:(id)arg13;
- (id)initWithPersistentDataRepresentation:(id)arg1;
- (id)initWithStream:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLooselyEqualToWallpaperOptions:(id)arg1;
- (bool)isMagnifyEnabled;
- (bool)isPortrait;
- (id)name;
- (bool)parallaxEnabled;
- (double)parallaxFactor;
- (id)persistentDataRepresentation;
- (id)persistentPropertyList;
- (double)rotationAngle;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHasVideo:(bool)arg1;
- (void)setMagnifyEnabled:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setParallaxFactor:(double)arg1;
- (void)setPortrait:(bool)arg1;
- (void)setRotationAngle:(double)arg1;
- (void)setStillTimeInVideo:(double)arg1;
- (void)setSupportsCropping:(bool)arg1;
- (void)setSupportsRotation:(bool)arg1;
- (void)setWallpaperKitData:(id)arg1;
- (void)setWallpaperMode:(long long)arg1;
- (void)setWallpaperStatus:(long long)arg1;
- (void)setZoomScale:(double)arg1;
- (double)stillTimeInVideo;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)supportsCropping;
- (bool)supportsRotation;
- (id)wallpaperKitData;
- (long long)wallpaperMode;
- (long long)wallpaperStatus;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;
- (double)zoomScale;

@end
