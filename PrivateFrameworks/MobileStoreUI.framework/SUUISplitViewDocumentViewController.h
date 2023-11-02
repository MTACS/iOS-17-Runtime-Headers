
@interface SUUISplitViewDocumentViewController : SUUIViewController <SUUIDocumentViewController, SUUINavigationDocumentDelegate> {
    UIViewController * _delayingPresentationViewController;
    SUUINavigationDocumentController * _leftNavigationDocumentController;
    SUUINavigationDocumentController * _rightNavigationDocumentController;
    UISplitViewController * _splitViewController;
    SUUISplitViewTemplateElement * _templateElement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SUUINavigationDocumentController *leftNavigationDocumentController;
@property (nonatomic, retain) SUUINavigationDocumentController *rightNavigationDocumentController;
@property (readonly) Class superclass;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (void)_SUUI_endDelayingPresentation;
- (id)_defaultBackgroundColor;
- (bool)_isFullyPopulated;
- (void)_reloadSplitViewControllers;
- (void)dealloc;
- (void)delayPresentationIfNeededForParentViewController:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithTemplateElement:(id)arg1 clientContext:(id)arg2;
- (id)leftBarButtonItemsForDocument:(id)arg1;
- (id)leftNavigationDocumentController;
- (void)loadView;
- (void)navigationDocumentStackDidChange:(id)arg1;
- (id)rightNavigationDocumentController;
- (void)setLeftNavigationDocumentController:(id)arg1;
- (void)setRightNavigationDocumentController:(id)arg1;
- (void)suui_viewWillAppear:(bool)arg1;

@end
