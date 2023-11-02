
@interface UIDocumentPickerViewController : UIViewController <UIAdaptivePresentationControllerDelegate, UIDocumentBrowserViewControllerPrivateDelegate, _UIRemoteViewControllerContaining> {
    bool  _allowsMultipleSelection;
    bool  _automaticallyDismissesAfterCompletion;
    UIViewController * _childViewController;
    DOCConfiguration * _configuration;
    <UIDocumentPickerDelegate> * _delegate;
    NSURL * _directoryURL;
    unsigned long long  _documentPickerMode;
    NSArray * _documentTypes;
    bool  _ignoreApplicationEntitlementForImport;
    bool  _isContentManaged;
    NSMutableArray * _securityScopedURLs;
    NSArray * _uploadURLs;
    <UIDocumentPickerDelegate> * _weak_delegate;
}

@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (getter=_ignoreApplicationEntitlementForImport, setter=_setIgnoreApplicationEntitlementForImport:, nonatomic) bool _ignoreApplicationEntitlementForImport;
@property (nonatomic, retain) NSMutableArray *_securityScopedURLs;
@property (nonatomic) bool allowsMultipleSelection;
@property (getter=_automaticallyDismissesAfterCompletion, setter=_setAutomaticallyDismissesAfterCompletion:, nonatomic) bool automaticallyDismissesAfterCompletion;
@property (getter=_childViewController, setter=_setChildViewController:, nonatomic, retain) UIViewController *childViewController;
@property (nonatomic, retain) DOCConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIDocumentPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSURL *directoryURL;
@property (nonatomic) unsigned long long documentPickerMode;
@property (nonatomic, copy) NSArray *documentTypes;
@property (getter=_forPickingDownloadsFolder, setter=_setForPickingDownloadsFolder:, nonatomic) bool forPickingDownloadsFolder;
@property (readonly) unsigned long long hash;
@property (getter=_isContentManaged, setter=_setIsContentManaged:, nonatomic) bool isContentManaged;
@property (nonatomic) unsigned long long pickerUserInterfaceStyle;
@property (nonatomic) bool shouldShowFileExtensions;
@property (getter=_sourceIsManaged, setter=_setSourceIsManaged:, nonatomic) bool sourceIsManaged;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *uploadURLs;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (bool)_automaticallyDismissesAfterCompletion;
- (void)_callDelegateWithSelectedURLsAndDismiss:(id)arg1;
- (id)_childViewController;
- (void)_consumeSandboxExtensionForURL:(id)arg1;
- (id)_containedRemoteViewController;
- (void)_didTapCancel;
- (bool)_forPickingDownloadsFolder;
- (bool)_ignoreApplicationEntitlementForImport;
- (id)_initForImportingDocumentsWithConversionRules:(id)arg1;
- (id)_initIgnoringApplicationEntitlementForImportOfTypes:(id)arg1;
- (bool)_isContentManaged;
- (id)_securityScopedURLs;
- (void)_setAutomaticallyDismissesAfterCompletion:(bool)arg1;
- (void)_setChildViewController:(id)arg1;
- (void)_setForPickingDownloadsFolder:(bool)arg1;
- (void)_setIgnoreApplicationEntitlementForImport:(bool)arg1;
- (void)_setIsContentManaged:(bool)arg1;
- (void)_setSourceIsManaged:(bool)arg1;
- (bool)_sourceIsManaged;
- (void)_tellDelegateDocumentPickerWasCancelled;
- (bool)allowsMultipleSelection;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (id)directoryURL;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)documentBrowser:(id)arg1 didPickDocumentURLs:(id)arg2;
- (void)documentManagerWasCancelled:(id)arg1;
- (unsigned long long)documentPickerMode;
- (id)documentTypes;
- (id)initForExportingURLs:(id)arg1;
- (id)initForExportingURLs:(id)arg1 asCopy:(bool)arg2;
- (id)initForOpeningContentTypes:(id)arg1;
- (id)initForOpeningContentTypes:(id)arg1 asCopy:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentTypes:(id)arg1 inMode:(unsigned long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithURL:(id)arg1 inMode:(unsigned long long)arg2;
- (id)initWithURLs:(id)arg1 inMode:(unsigned long long)arg2;
- (long long)modalPresentationStyle;
- (unsigned long long)pickerUserInterfaceStyle;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setAllowsMultipleSelection:(bool)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDirectoryURL:(id)arg1;
- (void)setDocumentPickerMode:(unsigned long long)arg1;
- (void)setDocumentTypes:(id)arg1;
- (void)setPickerUserInterfaceStyle:(unsigned long long)arg1;
- (void)setShouldShowFileExtensions:(bool)arg1;
- (void)setUploadURLs:(id)arg1;
- (void)set_securityScopedURLs:(id)arg1;
- (bool)shouldShowFileExtensions;
- (id)uploadURLs;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

+ (id)sf_documentPickerViewControllerWithURL:(id)arg1 inMode:(unsigned long long)arg2 sourceURL:(id)arg3;

@end
