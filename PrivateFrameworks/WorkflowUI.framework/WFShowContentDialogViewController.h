
@interface WFShowContentDialogViewController : WFCompactDialogViewController <QLPreviewControllerDelegate, WFCompactContentPreviewViewControllerDelegate> {
    UIViewController * _containerViewController;
    WFContentCollection * _dataSource;
    WFCompactHighlightedView * _highlightView;
    id /* block */  _installThumbnailHandler;
    WFCompactContentPreviewViewController * _previewViewController;
}

@property (nonatomic, retain) UIViewController *containerViewController;
@property (nonatomic, retain) WFContentCollection *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) WFCompactHighlightedView *highlightView;
@property (nonatomic, copy) id /* block */ installThumbnailHandler;
@property (nonatomic, retain) WFCompactContentPreviewViewController *previewViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)askContainerForHomeGestureUpdate;
- (id)containerViewController;
- (double)contentHeightForWidth:(double)arg1 withMaximumVisibleHeight:(double)arg2;
- (double)contentHeightWithPreferredHeight:(double)arg1 maxVisibleHeight:(double)arg2;
- (id)dataSource;
- (void)handleTapGesture:(id)arg1;
- (bool)hasCustomHomeGestureBehavior;
- (id)highlightView;
- (void)homeGestureDidPassThreshold;
- (id /* block */)installThumbnailHandler;
- (void)loadView;
- (void)prepareForPresentationWithCompletionHandler:(id /* block */)arg1;
- (void)presentFullScreenPreview;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3;
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;
- (void)previewControllerWillDismiss:(id)arg1;
- (id)previewViewController;
- (void)previewViewControllerDidInvalidateSize:(id)arg1;
- (void)setContainerViewController:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setHighlightView:(id)arg1;
- (void)setInstallThumbnailHandler:(id /* block */)arg1;
- (void)setPreviewViewController:(id)arg1;
- (id)sourceViewForQuickLook;
- (double)targetHeightForAnimatingPreviewViewController:(id)arg1 toProposedHeight:(double)arg2;
- (void)updateActions;
- (void)viewDidAppear:(bool)arg1;

@end
