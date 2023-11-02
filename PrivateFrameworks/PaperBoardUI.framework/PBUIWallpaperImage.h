
@interface PBUIWallpaperImage : UIImage {
    NSURL * _wallpaperFileURL;
}

@property (nonatomic, readonly, copy) NSURL *wallpaperFileURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(double)arg2 orientation:(long long)arg3 wallpaperFileURL:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithFlatColor:(id)arg1;
- (id)initWithFlatColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
- (bool)isEqual:(id)arg1;
- (id)wallpaperFileURL;

@end
