
@interface FigCameraViewfinderSession : NSObject {
    FigDelegateStorage * _delegateStorage;
}

- (void)closePreviewStream;
- (void)dealloc;
- (id)init;
- (void)openPreviewStreamWithOptions:(id)arg1;

@end
