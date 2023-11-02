
@interface ASVInlineHostViewController : UIViewController <UIDocumentInteractionControllerDelegate> {
    NSURL * _canonicalWebPageURL;
    UIViewController * _childVC;
    UIDocumentInteractionController * _documentInteractionController;
    <ARQLInlineService2> * _fullscreenService;
    NSUUID * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1;
- (void)handleConnectionInterrupted;
- (id)initWithUUID:(id)arg1 child:(id)arg2 fullscreenInlineService:(id)arg3 canonicalWebPageURL:(id)arg4;
- (void)queryShowShareSheetAndNotifyDidDismiss:(bool)arg1;
- (void)requestNewShareSheetFrame;
- (void)showShareSheet:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
