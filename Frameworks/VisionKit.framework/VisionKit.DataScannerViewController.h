
@interface VisionKit.DataScannerViewController : UIViewController {
    void barcodeItems;
    void barcodeProcessor;
    void bridge;
    void cantFindItemsTimer;
    void capturePhotoCompletions;
    void currentRecognizedItems;
    void customWords;
    void delegate;
    void frameProvider;
    void guidanceView;
    void highlightViewForItemUUID;
    void hitTestView;
    void homographyProcessor;
    void impl;
    void infrequentProcessingInterval;
    void initialPinchZoom;
    void internalDataType;
    void isGuidanceEnabled;
    void isHighFrameRateTrackingEnabled;
    void isHighlightingEnabled;
    void isPinchToZoomEnabled;
    void optFlowTextProcessor;
    void overlayContainerView;
    void pinchGestureRecognizer;
    void privateDelegate;
    void processingInterval;
    void qualityLevel;
    void recognizedDataTypes;
    void recognizedItemsContinuations;
    void recognizesMultipleItems;
    void regionOfInterest;
    void respondsToDidBeginPinchToZoom;
    void respondsToDidEndPinchToZoom;
    void reticleView;
    void shouldResumeProcessingOnEnterForeground;
    void tapGestureRecognizer;
    void textItems;
    void textProcessor;
    void usesLanguageDetection;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didEnterBackground;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)onPinch:(id)arg1;
- (void)onTap:(id)arg1;
- (void)removeFromParentViewController;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)willEnterForeground;

@end
