
@interface AVCompositionFormatReaderInspector : AVFormatReaderInspector

- (bool)isCompatibleWithAirPlayVideo;
- (bool)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)arg1;
- (bool)isCompatibleWithSavedPhotosAlbum;
- (bool)isComposable;
- (bool)isExportable;
- (bool)isPlayable;
- (bool)isReadable;

@end
