
@protocol JFXMediaSettingsProvider <NSObject>

@required

- (struct CGSize { double x1; double x2; })compositionSize;
- (int)frameRate;
- (struct CGSize { double x1; double x2; })frameSize;
- (struct CGSize { double x1; double x2; })renderSize;
- (int)timeScale;

@end
