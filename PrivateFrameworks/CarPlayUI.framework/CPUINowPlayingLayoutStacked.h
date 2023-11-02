
@interface CPUINowPlayingLayoutStacked : _CPUINowPlayingLayout

- (double)albumArtWidthMultiplier;
- (unsigned long long)artworkPosition;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (struct CGSize { double x1; double x2; })maximumNowPlayingSize;
- (struct CGSize { double x1; double x2; })maximumTitleViewSize;
- (double)playModeControlButtonSpacing;
- (bool)playModeControlButtonsFullWidth;
- (bool)progressViewFullWidth;
- (unsigned long long)trackInfoFontStyle;
- (double)transportControlButtonSpacing;

@end
