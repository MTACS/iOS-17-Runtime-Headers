
@interface SKUISplitViewDocumentViewController : SKUIViewController <SKUIDocumentViewController, SKUINavigationDocumentDelegate> {
    UIViewController * _delayingPresentationViewController;
    SKUINavigationDocumentController * _leftNavigationDocumentController;
    SKUINavigationDocumentController * _rightNavigationDocumentController;
    UISplitViewController * _splitViewController;
    SKUISplitViewTemplateElement * _templateElement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SKUINavigationDocumentController *leftNavigationDocumentController;
@property (nonatomic, retain) SKUINavigationDocumentController *rightNavigationDocumentController;
@property (readonly) Class superclass;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (id)_defaultBackgroundColor;
- (bool)_isFullyPopulated;
- (void)_reloadSplitViewControllers;
- (void)_skui_endDelayingPresentation;
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
- (void)skui_viewWillAppear:(bool)arg1;

@end