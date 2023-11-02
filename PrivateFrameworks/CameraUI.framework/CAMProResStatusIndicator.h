
@interface CAMProResStatusIndicator : CAMControlStatusIndicator {
    long long  _colorSpace;
    long long  _proResVideoMode;
}

@property (nonatomic, readonly) long long colorSpace;
@property (nonatomic, readonly) long long proResVideoMode;

- (id)_imageNameForProResVideoModeOff;
- (id)_imageNameForProResVideoModeOn;
- (long long)colorSpace;
- (id)imageNameForAXHUD;
- (id)imageNameForCurrentState;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (long long)proResVideoMode;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setProResVideoMode:(long long)arg1 colorSpace:(long long)arg2 animated:(bool)arg3;
- (bool)shouldShowSlashForCurrentState;
- (bool)shouldUseOutline;
- (bool)shouldUseSlash;

@end
