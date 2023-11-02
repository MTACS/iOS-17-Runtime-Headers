
@interface LinkPreviewViewController : UIViewController <SFScreenTimeOverlayHostingViewController, WBSFluidProgressControllerWindowDelegate, _SFBrowserViewProviding> {
    _SFBrowserView * _browserView;
    TabDocument * _previewTabDocument;
    SFScreenTimeOverlayViewController * _screenTimeOverlayViewController;
}

@property (nonatomic, readonly) _SFBrowserView *browserView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _SFLinkPreviewHeader *previewHeader;
@property (nonatomic, readonly) TabDocument *previewTabDocument;
@property (nonatomic, retain) SFScreenTimeOverlayViewController *screenTimeOverlayViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)browserView;
- (id)currentFluidProgressStateSource;
- (void)displayHostedScreenTimeView;
- (void)fluidProgressRocketAnimationDidComplete;
- (id)initWithTabDocument:(id)arg1;
- (void)loadView;
- (id)previewHeader;
- (id)previewTabDocument;
- (id)screenTimeOverlayViewController;
- (void)setScreenTimeOverlayViewController:(id)arg1;
- (void)updatePreviewLoadingUIWithURLString:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)willCommitPreviewedWebView;

@end
