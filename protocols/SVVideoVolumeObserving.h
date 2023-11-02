
@protocol SVVideoVolumeObserving <NSObject>

@required

- (id /* block */)muteStateChangeBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SVVideoVolumeObserving> *, void*, id, SEL
- (bool)muted;
- (void)onMuteStateChange:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVideoVolumeObserving> *, void*
- (void)onVolumeChange:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SVVideoVolumeObserving> *, void*
- (float)volume;
- (id /* block */)volumeChangeBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SVVideoVolumeObserving> *, void*, id, SEL

@end
