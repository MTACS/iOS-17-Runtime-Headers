
@interface NewsFeed.DebugFormatSnapshotCanvasView : UIView <UIGestureRecognizerDelegate> {
    void $__lazy_storage_$_rotateGesture;
    void $__lazy_storage_$_translateGesture;
    void $__lazy_storage_$_zoomGesture;
    void _selectedSnapshotView;
    void contentView;
    void depthSlider;
    void hiddenSlider;
    void rotateState;
    void snapshotTransform;
    void snapshots;
    void toolbarItems;
    void translateState;
    void zoomState;
}

- (void).cxx_destruct;
- (void)doDepthChangedWithSender:(id)arg1;
- (void)doHiddenChangedWithSender:(id)arg1;
- (void)doPerspectiveWithSender:(id)arg1;
- (void)doRotateWithGesture:(id)arg1;
- (void)doTranslateWithGesture:(id)arg1;
- (void)doZoomWithGesture:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;

@end
