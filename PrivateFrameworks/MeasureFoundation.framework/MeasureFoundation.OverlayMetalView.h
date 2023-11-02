
@interface MeasureFoundation.OverlayMetalView : MTKView <MTKViewDelegate> {
    void adProcessor;
    void adWindow;
    void blendingEnabled;
    void currentDemoMode;
    void demoModes;
    void depthProcessor;
    void scene;
    void swipeDownRecognizer;
    void swipeUpRecognizer;
}

- (void).cxx_destruct;
- (void)didSwipeWithSender:(id)arg1;
- (void)drawInMTKView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 device:(id)arg2;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize { double x1; double x2; })arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
