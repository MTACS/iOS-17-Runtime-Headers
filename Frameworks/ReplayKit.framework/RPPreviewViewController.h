
@interface RPPreviewViewController : UIViewController <RPVideoEditorViewControllerDelegate> {
    RPVideoEditorHostViewController * _hostViewController;
    NSURL * _movieURL;
    <RPPreviewViewControllerDelegate> * _previewControllerDelegate;
    bool  _wasStatusBarHidden;
}

@property (nonatomic, retain) RPVideoEditorHostViewController *hostViewController;
@property (nonatomic, retain) NSURL *movieURL;
@property (nonatomic) <RPPreviewViewControllerDelegate> *previewControllerDelegate;
@property (nonatomic) bool wasStatusBarHidden;

+ (void)loadPreviewViewControllerWithMovieURL:(id)arg1 attachmentURL:(id)arg2 overrideShareMessage:(id)arg3 overrideTintColor:(id)arg4 completion:(id /* block */)arg5;
+ (void)loadPreviewViewControllerWithMovieURL:(id)arg1 completion:(id /* block */)arg2;
+ (void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)extensionDidFinishWithActivityTypes:(id)arg1;
- (id)hostViewController;
- (id)movieURL;
- (id)previewControllerDelegate;
- (void)setHostViewController:(id)arg1;
- (void)setMovieURL:(id)arg1;
- (void)setPreviewControllerDelegate:(id)arg1;
- (void)setWasStatusBarHidden:(bool)arg1;
- (void)videoEditor:(id)arg1 didFinishWithActivityTypes:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)wasStatusBarHidden;

@end
