
@interface MagnifierSupport.FreezeFramePageContentViewController : UIViewController <UIEditMenuInteractionDelegate, UIScrollViewDelegate> {
    void $__lazy_storage_$_doubleTapGestureRecognizer;
    void $__lazy_storage_$_editMenuInteraction;
    void $__lazy_storage_$_longPressGestureRecognizer;
    void $__lazy_storage_$_singleTapGestureRecognizer;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  asset;
    void delayedAssetSubscription;
    void filterSet;
    void fullSizeWorkItem;
    void image;
    void imageProcessingQueue;
    void imageView;
    void isShowingFullSizeImage;
    void pageSelectionDelegate;
    void scrollView;
    void shareMenuLocation;
    void thumbnailWorkItem;
    void zoomSubscription;
}

@property (nonatomic, readonly) bool canBecomeFirstResponder;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)description;
- (void)doubleTap:(id)arg1;
- (id)editMenuInteraction:(id)arg1 menuForConfiguration:(id)arg2 suggestedActions:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)longPress:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)shareFreezeFrameMenuItemAction;
- (void)singleTap:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
