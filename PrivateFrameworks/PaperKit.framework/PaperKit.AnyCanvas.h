
@interface PaperKit.AnyCanvas : UIView {
    void $__lazy_storage_$_acceptedDropLayouts;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _canvasUUID;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  canvasState;
    void canvasStateLiveStreamMessenger;
    void collaborationStateView;
    void context;
    void delegate;
    void editingMode;
    void isCurrentlyLiveEditing;
    void isScribbling;
    void liveEditingContinuations;
    void liveStreamDrawings;
    void participantDetailsDataSource;
    void resizeView;
    void screenScaleOverride;
    void showParticipantCursors;
    void transparentBackground;
    void viewControllerForPresenting;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
