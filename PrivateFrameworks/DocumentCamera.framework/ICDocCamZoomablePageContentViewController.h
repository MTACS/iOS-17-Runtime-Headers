
@interface ICDocCamZoomablePageContentViewController : UIViewController <ICDocCamZoomablePageContentViewDelegate, UIScrollViewDelegate> {
    VKCImageAnalysisInteraction * _analysisInteraction;
    UIImage * _image;
    UIImageView * _imageView;
    <ICDocCamZoomablePageContentDelegate> * _pageContentDelegate;
    unsigned long long  _pageIndex;
    struct CGSize { 
        double width; 
        double height; 
    }  _prevScrollViewSize;
    UIScrollView * _scrollView;
    bool  _shouldSetupScalesInViewDidLayoutSubviews;
}

@property (nonatomic, retain) VKCImageAnalysisInteraction *analysisInteraction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) <ICDocCamZoomablePageContentDelegate> *pageContentDelegate;
@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic) struct CGSize { double x1; double x2; } prevScrollViewSize;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic) bool shouldSetupScalesInViewDidLayoutSubviews;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double zoomScale;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (bool)accessibilityPerformEscape;
- (id)analysisInteraction;
- (void)analyzeCurrentImageIfNecessary;
- (void)doubleTap:(id)arg1;
- (id)image;
- (id)imageView;
- (id)init;
- (bool)isTouchingAnalyzableContentAtPoint:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)pageContentDelegate;
- (void)pageContentViewDidPencilDown;
- (unsigned long long)pageIndex;
- (struct CGSize { double x1; double x2; })prevScrollViewSize;
- (void)resetImageCentering;
- (void)resetZoom;
- (id)scrollView;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)setAnalysisInteraction:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setPageContentDelegate:(id)arg1;
- (void)setPageIndex:(unsigned long long)arg1;
- (void)setPrevScrollViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setScrollView:(id)arg1;
- (void)setShouldSetupScalesInViewDidLayoutSubviews:(bool)arg1;
- (void)setupAccessibility;
- (void)setupScales;
- (bool)shouldSetupScalesInViewDidLayoutSubviews;
- (void)singleTap;
- (unsigned long long)supportedInterfaceOrientations;
- (void)view:(id)arg1 setCenter:(struct CGPoint { double x1; double x2; })arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForZoomingInScrollView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })zoomRectForScale:(float)arg1 withCenter:(struct CGPoint { double x1; double x2; })arg2;
- (double)zoomScale;

@end
