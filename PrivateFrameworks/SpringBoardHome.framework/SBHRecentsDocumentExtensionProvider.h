
@interface SBHRecentsDocumentExtensionProvider : NSObject <SBHRecentsDocumentExtensionWrappingViewControllerDelegate, _SBUIPopoverExtensionHostDelegate> {
    struct CGSize { 
        double width; 
        double height; 
    }  _compactPreferredContentSize;
    <SBHRecentsDocumentExtensionProviderDelegate> * _delegate;
    NSExtension * _extension;
    SBUIPopoverExtensionHostViewController * _hostViewController;
    <_SBUIPopoverExtensionRemoteInterface> * _remoteService;
    SBHRecentsDocumentExtensionWrappingViewController * _wrappingViewController;
}

@property (nonatomic) struct CGSize { double x1; double x2; } compactPreferredContentSize;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBHRecentsDocumentExtensionProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtension *extension;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBUIPopoverExtensionHostViewController *hostViewController;
@property (nonatomic, retain) <_SBUIPopoverExtensionRemoteInterface> *remoteService;
@property (readonly) Class superclass;
@property (nonatomic) bool usesIntrinsicContentSizeBasedOnScreenSize;
@property (nonatomic, retain) SBHRecentsDocumentExtensionWrappingViewController *wrappingViewController;

- (void).cxx_destruct;
- (void)_extensionWillExit:(id)arg1;
- (void)_loadExtensionWithCompletion:(id /* block */)arg1;
- (void)_loadRemoteViewControllerWithConfiguration:(id /* block */)arg1;
- (id)_preferredExtensionIdentifier;
- (void)_setupHostViewController:(id)arg1;
- (void)_teardownHostViewController;
- (id)_viewControllerConfiguration:(id /* block */)arg1;
- (bool)canShowRecentsDocumentExtensionProviderForBundleIdentifier:(id)arg1;
- (struct CGSize { double x1; double x2; })compactPreferredContentSize;
- (void)dealloc;
- (id)delegate;
- (id)extension;
- (id)hostViewController;
- (id)init;
- (void)popoverHostExtensionDidExit:(id)arg1;
- (void)popoverHostExtensionRequestsDismiss:(id)arg1;
- (bool)recentsDocumentExtensionWrappingViewControllerHasTransparentContent:(id)arg1;
- (id)recentsDocumentViewControllerForBundleIdentifier:(id)arg1;
- (id)remoteService;
- (void)setCompactPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setRemoteService:(id)arg1;
- (void)setUsesIntrinsicContentSizeBasedOnScreenSize:(bool)arg1;
- (void)setWrappingViewController:(id)arg1;
- (bool)usesIntrinsicContentSizeBasedOnScreenSize;
- (id)wrappingViewController;

@end
