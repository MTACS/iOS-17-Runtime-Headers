
@interface CPSSearchTemplateViewController : UISearchContainerViewController <CPListTemplateDelegate, CPSBaseTemplateViewController, CPSearchTemplateProviding, UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating> {
    CPTemplate * _associatedTemplate;
    bool  _didDisappear;
    bool  _didPop;
    CPListTemplate * _listTemplate;
    <CPTemplateDelegate> * _templateDelegate;
    NAFuture * _templateProviderFuture;
    <CPSTemplateViewControllerDelegate> * _viewControllerDelegate;
}

@property (nonatomic, retain) CPTemplate *associatedTemplate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didDisappear;
@property (nonatomic) bool didPop;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CPListTemplate *listTemplate;
@property (nonatomic, readonly) CPSearchTemplate *searchTemplate;
@property (nonatomic, readonly) <CPSearchClientTemplateDelegate> *searchTemplateDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) <CPTemplateDelegate> *templateDelegate;
@property (nonatomic, readonly) NAFuture *templateProviderFuture;
@property (nonatomic) <CPSTemplateViewControllerDelegate> *viewControllerDelegate;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_cps_viewControllerWasPopped;
- (bool)_isSceneActive;
- (id)associatedTemplate;
- (bool)didDisappear;
- (void)didDismissSearchController:(id)arg1;
- (bool)didPop;
- (id)initWithSearchTemplate:(id)arg1 templateDelegate:(id)arg2 templateEnvironment:(id)arg3 interactionModel:(unsigned long long)arg4;
- (id)listTemplate;
- (void)listTemplate:(id)arg1 didSelectListItem:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeFromParentViewController;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (bool)searchBarShouldEndEditing:(id)arg1;
- (id)searchTemplate;
- (id)searchTemplateDelegate;
- (void)setAssociatedTemplate:(id)arg1;
- (void)setDidDisappear:(bool)arg1;
- (void)setDidPop:(bool)arg1;
- (void)setListTemplate:(id)arg1;
- (void)setTemplateDelegate:(id)arg1;
- (void)setViewControllerDelegate:(id)arg1;
- (id)templateDelegate;
- (id)templateProviderFuture;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (id)viewControllerDelegate;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
