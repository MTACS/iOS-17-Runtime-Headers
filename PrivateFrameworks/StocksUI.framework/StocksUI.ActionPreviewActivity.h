
@interface StocksUI.ActionPreviewActivity : NSObject <SXActionPreviewActivity> {
    void handler;
    void linkedContentProvider;
    void router;
}

- (void).cxx_destruct;
- (void)commitViewController:(id)arg1 action:(id)arg2;
- (id)init;
- (id)previewViewControllerForAction:(id)arg1;

@end
