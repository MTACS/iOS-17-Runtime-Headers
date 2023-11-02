
@interface PhotosUICore.MediaViewTungstenLayout : PXGAbsoluteCompositeLayout <PXGLayoutVisibleRectDelegate> {
    void contentLayoutIndex;
    void scrollLayout;
    void scrollLayoutIndex;
    void scrollLayoutObservation;
    void updater;
    void viewModel;
    void viewModelObservation;
}

@property (nonatomic, readonly) bool canHandleVisibleRectRejection;

- (void).cxx_destruct;
- (bool)canHandleVisibleRectRejection;
- (id)init;
- (id)initWithComposition:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layout:(id)arg1 visibleRectForRequestedVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)referenceSizeDidChange;
- (void)update;
- (void)updateGeometry;

@end
