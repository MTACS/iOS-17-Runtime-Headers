
@interface _SFWebExtensionPopupViewController : UIViewController <UIAdaptivePresentationControllerDelegate, UIPopoverPresentationControllerDelegate> {
    NSTimer * _contentSizeStabilizedTimer;
    NSTimer * _contentSizeTimeoutTimer;
    bool  _hasDisconnectedFromWebExtension;
    UIViewController * _parentViewController;
    <_SFPopoverSourceInfo> * _popoverSourceInfo;
    WKWebView * _popupWebView;
    bool  _presentedAsSheet;
    struct CGSize { 
        double width; 
        double height; 
    }  _previousContentSize;
    _SFWebExtensionPopupViewController * _referenceToSelf;
    SFWebExtension * _webExtension;
    <WBSWebExtensionWindow> * _window;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WKWebView *popupWebView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <WBSWebExtensionWindow> *window;

- (void).cxx_destruct;
- (void)_contentSizeDidStabilize;
- (void)_dismissPopup;
- (void)_displayPopup;
- (void)_presentationController:(id)arg1 prepareAdaptivePresentationController:(id)arg2;
- (id)_remoteInspectionMenuTitleForWebExtension:(id)arg1 popupURL:(id)arg2;
- (void)_showExtensionPopupIfNeededAndUpdateContentSize;
- (void)_updateDetentForSheetPresentationController:(id)arg1;
- (void)_updatePopoverContentSizeIfNecessary;
- (void)_viewControllerDismissalTransitionDidEnd:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)dealloc;
- (void)disconnectFromWebExtension;
- (id)initWithPopupURL:(id)arg1 webExtension:(id)arg2 window:(id)arg3 parentViewController:(id)arg4 popoverSourceInfo:(id)arg5;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)popupWebView;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (id)window;

@end
