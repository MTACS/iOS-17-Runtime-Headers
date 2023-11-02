
@interface QLCustomItemViewController : UIViewController <QLRemotePopoverTracker> {
    <QLCustomItemViewControllerHost> * _hostViewControllerProxy;
    bool  _isShareEnabled;
    QLAppearance * _lastAppearance;
    NSDictionary * _previewOptions;
    UIView * _shareSheetPresentationView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) <QLCustomItemViewControllerHost> *hostViewControllerProxy;
@property (nonatomic) bool isShareEnabled;
@property (nonatomic, copy) NSDictionary *previewOptions;
@property (nonatomic) UIView *shareSheetPresentationView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didDismissActivityViewController;
- (void)dismissPreviewController;
- (void)forwardMessageToHost:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getFrameWithCompletionBlock:(id /* block */)arg1;
- (id)hostViewControllerProxy;
- (bool)isShareEnabled;
- (void)presentActivityViewControllerFromView:(id)arg1;
- (void)presentActivityViewControllerFromView:(id)arg1 withURL:(id)arg2;
- (void)presentationModeDidChange:(unsigned long long)arg1 animated:(bool)arg2;
- (id)previewOptions;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)setFullScreen:(bool)arg1;
- (void)setHostViewControllerProxy:(id)arg1;
- (void)setIsShareEnabled:(bool)arg1;
- (void)setPreviewOptions:(id)arg1;
- (void)setShareSheetPresentationView:(id)arg1;
- (id)shareSheetPresentationView;

@end
