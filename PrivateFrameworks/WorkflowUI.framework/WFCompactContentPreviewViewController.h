
@interface WFCompactContentPreviewViewController : UIViewController <WFCompactThumbnailViewControllerDelegate> {
    WFContentItem * _contentItem;
    <WFCompactContentPreviewViewControllerDelegate> * _delegate;
    UIActivityIndicatorView * _indicatorView;
    WFCompactThumbnailViewController * _thumbnailViewController;
}

@property (nonatomic, readonly) bool contentAllowsScrolling;
@property (nonatomic, readonly) WFContentItem *contentItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFCompactContentPreviewViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIActivityIndicatorView *indicatorView;
@property (nonatomic, readonly) UIView *sourceViewForQuickLook;
@property (readonly) Class superclass;
@property (nonatomic, retain) WFCompactThumbnailViewController *thumbnailViewController;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_fileThumbnailViewControllerForContentItem:(id)arg1;
- (void)_getTypeSpecificThumbnailViewControllerForContentItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)contentAllowsScrolling;
- (double)contentHeightForWidth:(double)arg1;
- (id)contentItem;
- (id)delegate;
- (void)getThumbnailViewControllerForContentItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)indicatorView;
- (void)invalidateContentSize;
- (void)loadView;
- (void)setContentItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setIndicatorView:(id)arg1;
- (void)setThumbnailViewController:(id)arg1;
- (id)sourceViewForQuickLook;
- (id)thumbnailViewController;
- (void)thumbnailViewControllerDidInvalidateSize:(id)arg1;
- (void)viewDidLayoutSubviews;

@end
