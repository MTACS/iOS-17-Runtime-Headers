
@interface WKBokehView : UIView {
    WKBokehWallpaperInput * _bokehWallpaperInput;
    NSMutableArray * _bubbles;
    CAGradientLayer * _contentLayer;
    CADisplayLink * _displayLink;
    WKBokehMotionFilter * _motionFilter;
}

@property (nonatomic, copy) WKBokehWallpaperInput *bokehWallpaperInput;

+ (id)thumbnailImageWithBokehInput:(id)arg1;

- (void).cxx_destruct;
- (void)_screenDidUpdate:(id)arg1;
- (id)bokehWallpaperInput;
- (id)initWithBokehWallpaperInput:(id)arg1;
- (void)layoutSubviews;
- (void)setAnimationEnabled:(bool)arg1;
- (void)setBokehWallpaperInput:(id)arg1;

@end
