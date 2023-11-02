
@interface VUIMPMediaItemAirTrafficDownloadController : VUIMPMediaItemDownloadController

- (void)_handleMediaLibraryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)initWithMediaItem:(id)arg1 serialProcessingDispatchQueue:(id)arg2;
- (id)initWithMediaItem:(id)arg1 state:(id)arg2 serialProcessingDispatchQueue:(id)arg3;
- (bool)supportsCancellation;
- (bool)supportsPausing;

@end
