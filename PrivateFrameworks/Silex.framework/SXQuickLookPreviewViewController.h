
@interface SXQuickLookPreviewViewController : QLPreviewController <QLPreviewControllerDataSource, QLPreviewControllerDelegate> {
    SXQuickLookFile * _file;
    SXQuickLookTransitionContext * _transitionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SXQuickLookFile *file;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SXQuickLookTransitionContext *transitionContext;

- (void).cxx_destruct;
- (id)file;
- (id)initWithFile:(id)arg1 transitionContext:(id)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;
- (id)transitionContext;
- (void)viewDidLoad;

@end
