
@interface _TVSearchTemplateController : _TVBgImageLoadingViewController <IKAppKeyboardDelegate, TVAppTemplateImpressionable, UISearchBarDelegate, UISearchResultsUpdating, _TVStackCollectionViewControllerDelegate> {
    IKViewElement * _collectionListElement;
    IKAppKeyboard * _ikKeyboard;
    double  _impressionThreshold;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardFrame;
    IKViewElement * _nonResultsElement;
    UIView * _nonResultsView;
    UIView * _originalSearchFieldRightView;
    long long  _originalSearchFieldRightViewMode;
    _TVStackCollectionViewController * _resultsViewController;
    UISearchController * _searchController;
    IKTextFieldElement * _searchFieldElement;
    UIActivityIndicatorView * _spinner;
    IKViewElement * _viewElement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) IKViewElement *viewElement;

- (void).cxx_destruct;
- (void)_cancelImpressionsUpdate;
- (bool)_isAtWordEnd;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)_recordImpressionsForVisibleView;
- (id)_sanitizedText;
- (void)_scrollToTopAnimated:(bool)arg1;
- (bool)_searchBarContainsFocus;
- (void)_setNonResultsView:(id)arg1;
- (void)_updateImpressions;
- (void)_updateKeyboardText;
- (void)_updateSearchFieldText;
- (id)collectionView;
- (void)dealloc;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (id)init;
- (void)loadView;
- (void)stackCollectionViewController:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)textDidChangeForKeyboard:(id)arg1;
- (void)updateNavigationItem:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (id)viewElement;

@end
