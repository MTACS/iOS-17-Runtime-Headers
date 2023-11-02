
@interface _PhotosMediaViewAnalysisController : NSObject <PPKPhotosMediaViewImageAnalysisInteractionContext, VKCImageAnalysisInteractionDelegate> {
    VKCImageAnalysis * _analysis;
    VKCImageAnalyzer * _analyzer;
    PXDisplayAssetView * _assetView;
    unsigned long long  _automaticallyInvokedInteraction;
    NSError * _error;
    UIImage * _image;
    VKCImageAnalysisInteraction * _interaction;
    NSHashTable * _observers;
    <PPKPhotosMediaViewImageAnalysisInteractionContextDelegate> * delegate;
}

@property (nonatomic, readonly) bool actionInfoViewHidden;
@property (nonatomic) unsigned long long activeInteractionTypes;
@property (nonatomic, readonly) VKCImageAnalysis *analysis;
@property (nonatomic, readonly) bool analysisInteractionHidden;
@property (nonatomic) unsigned long long automaticallyInvokedInteraction;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PPKPhotosMediaViewImageAnalysisInteractionContextDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *filledInfoButtonGlyphName;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool highlightSelectableItemsEnabled;
@property (nonatomic, readonly) NSString *infoButtonGlyphName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enumerateObservers:(id /* block */)arg1;
- (void)_handleAnalysisResult:(id)arg1 error:(id)arg2;
- (void)_handleImageResult:(struct CGImage { }*)arg1 orientation:(long long)arg2 info:(id)arg3;
- (void)_performAutomaticallyInvokedInteractionIfNeeded;
- (bool)actionInfoViewHidden;
- (unsigned long long)activeInteractionTypes;
- (void)addAnalysisObserver:(id)arg1;
- (id)analysis;
- (bool)analysisInteractionHidden;
- (unsigned long long)automaticallyInvokedInteraction;
- (id)contentImageForImageAnalysisInteraction:(id)arg1;
- (id)delegate;
- (id)error;
- (id)filledInfoButtonGlyphName;
- (bool)hasResultsForAnalysisTypes:(unsigned long long)arg1;
- (bool)highlightSelectableItemsEnabled;
- (void)imageAnalysisInteraction:(id)arg1 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)imageAnalysisInteraction:(id)arg1 prepareForCalloutAction:(SEL)arg2 competion:(id /* block */)arg3;
- (void)imageAnalysisInteractionDidDismissVisualSearchController:(id)arg1;
- (id)infoButtonGlyphName;
- (id)initWithAssetView:(id)arg1;
- (id)presentingViewControllerForImageAnalysisInteraction:(id)arg1;
- (void)removeAnalysisObserver:(id)arg1;
- (void)setActionInfoViewHidden:(bool)arg1 animated:(bool)arg2;
- (void)setActiveInteractionTypes:(unsigned long long)arg1;
- (void)setAnalysis:(id)arg1;
- (void)setAnalysisInteractionHidden:(bool)arg1 animated:(bool)arg2;
- (void)setAutomaticallyInvokedInteraction:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHighlightSelectableItemsEnabled:(bool)arg1;
- (void)toggleInteractionTypes:(unsigned long long)arg1;

@end
