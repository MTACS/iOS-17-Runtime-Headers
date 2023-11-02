
@interface CAMRAWStatusIndicator : CAMControlStatusIndicator {
    long long  _rawMode;
}

@property (setter=setRAWMode:, nonatomic) long long rawMode;

- (id)imageNameForAXHUD;
- (id)imageNameForCurrentState;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (long long)rawMode;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setRAWMode:(long long)arg1;
- (void)setRAWMode:(long long)arg1 animated:(bool)arg2;
- (bool)shouldShowSlashForCurrentState;
- (bool)shouldUseSlash;

@end
