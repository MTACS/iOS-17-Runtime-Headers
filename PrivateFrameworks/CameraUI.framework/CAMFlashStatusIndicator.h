
@interface CAMFlashStatusIndicator : CAMControlStatusIndicator {
    bool  _flashActive;
    long long  _flashMode;
    bool  _flashUnavailable;
}

@property (getter=isFlashActive, nonatomic) bool flashActive;
@property (nonatomic) long long flashMode;
@property (getter=isFlashUnavailable, nonatomic) bool flashUnavailable;

- (long long)flashMode;
- (id)imageNameForAXHUD;
- (id)imageNameForCurrentState;
- (struct CGVector { double x1; double x2; })imageOffset;
- (id)imageSymbolColorConfiguration;
- (bool)isFlashActive;
- (bool)isFlashUnavailable;
- (void)setFlashActive:(bool)arg1;
- (void)setFlashMode:(long long)arg1;
- (void)setFlashMode:(long long)arg1 animated:(bool)arg2;
- (void)setFlashUnavailable:(bool)arg1;
- (bool)shouldFillOutlineForCurrentState;
- (bool)shouldShowSlashForCurrentState;
- (bool)shouldUseActiveTintForCurrentState;
- (bool)shouldUseSlash;

@end
