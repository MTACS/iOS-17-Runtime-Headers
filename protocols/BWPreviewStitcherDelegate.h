
@protocol BWPreviewStitcherDelegate <NSObject>

@required

- (void)previewStitcher:(BWPreviewStitcherNode *)arg1 didApplyWiderShift:(struct CGPoint { double x1; double x2; })arg2 widerScaleFactor:(float)arg3 widerQuadraBinningFactor:(int)arg4 forWiderPortType:(NSString *)arg5 narrowerShift:(struct CGPoint { double x1; double x2; })arg6 narrowerScaleFactor:(float)arg7 narrowerQuadraBinningFactor:(int)arg8 forNarrowerPortType:(NSString *)arg9;
- (void)previewStitcher:(BWPreviewStitcherNode *)arg1 overCaptureStatusDidChange:(int)arg2;

@end
