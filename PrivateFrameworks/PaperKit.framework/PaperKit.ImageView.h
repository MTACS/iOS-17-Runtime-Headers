
@interface PaperKit.ImageView : _TtGC8PaperKit26ContainerCanvasElementViewVS_5Image_ {
    void $__lazy_storage_$_pendingImageAnalysisObservers;
    void contentView;
    void getImageTask;
    void getThumbnailTask;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  image;
    void imageAnalysisDelegate;
    void imageGetCounter;
    void imageSetCounter;
    void isImageAnalysisEnabled;
    void mediaView;
    void missingImageView;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  presentedState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  state;
    void updateAfterZoomWorkItem;
}

- (void).cxx_destruct;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)layoutSubviews;

@end
