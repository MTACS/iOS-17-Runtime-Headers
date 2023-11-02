
@protocol JFXCompositionPlayableElementsDataSource <NSObject>

@required

- (PVColorSpace *)colorSpace;
- (long long)count;
- (int)duration;
- (int)frameRate;
- (struct CGSize { double x1; double x2; })frameSize;
- (double)imageScale;
- (bool)isExporting;
- (<JFXPlayableElement> *)playableElementAtIndex:(long long)arg1;
- (struct CGSize { double x1; double x2; })renderSize;
- (bool)screenCanShow2160P;
- (int)timeScale;
- (bool)use2160Pcontent:(bool)arg1;

@optional

- (bool)playerAllowsExternalPlayback;

@end
