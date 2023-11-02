
@interface NTKGreenfieldPlaceholderImageProvider : CLKImageProvider {
    UIImage * _appIcon;
    double  _progress;
}

@property (nonatomic, retain) UIImage *appIcon;
@property (nonatomic) double progress;

+ (id)provider;

- (void).cxx_destruct;
- (id)appIcon;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (double)progress;
- (void)setAppIcon:(id)arg1;
- (void)setProgress:(double)arg1;

@end
