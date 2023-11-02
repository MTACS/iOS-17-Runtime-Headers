
@protocol CPUINowPlayingLayoutProtocol <NSObject>

@required

- (double)albumArtWidthMultiplier;
- (unsigned long long)artworkPosition;
- (double)displayScale;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (struct CGSize { double x1; double x2; })maximumNowPlayingSize;
- (struct CGSize { double x1; double x2; })maximumTitleViewSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nowPlayingFrame;
- (double)playModeControlButtonSpacing;
- (double)playModeControlButtonWidth;
- (bool)playModeControlButtonsFullWidth;
- (bool)progressViewFullWidth;
- (bool)showsArtwork;
- (unsigned long long)trackInfoFontStyle;
- (double)transportControlButtonHeight;
- (double)transportControlButtonSpacing;

@end
