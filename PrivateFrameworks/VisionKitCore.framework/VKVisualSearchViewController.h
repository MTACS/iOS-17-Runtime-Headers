
@interface VKVisualSearchViewController : UIViewController {
    <VKVisualSearchViewControllerDelegate> * _delegate;
    bool  _didShowResults;
    UIActivityIndicatorView * _loadingIndicator;
    VKCVisualSearchResult * _visualSearchResult;
    NSArray * _visualSearchResultItems;
}

@property (nonatomic) <VKVisualSearchViewControllerDelegate> *delegate;
@property (nonatomic) bool didShowResults;
@property (nonatomic, retain) UIActivityIndicatorView *loadingIndicator;
@property (nonatomic, retain) VKCVisualSearchResult *visualSearchResult;
@property (nonatomic, copy) NSArray *visualSearchResultItems;

- (void).cxx_destruct;
- (id)_resultSectionsForRecognitionResult:(id)arg1;
- (id)_resultSectionsForRecognitionResultItems:(id)arg1;
- (void)_showVisualSearchViewController;
- (id)delegate;
- (bool)didShowResults;
- (id)initWithImage:(struct CGImage { }*)arg1;
- (id)initWithVisualSearchResultItems:(id)arg1;
- (id)loadingIndicator;
- (void)presentSearchViewControllerForSections:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidShowResults:(bool)arg1;
- (void)setLoadingIndicator:(id)arg1;
- (void)setVisualSearchResult:(id)arg1;
- (void)setVisualSearchResultItems:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (id)visualSearchResult;
- (id)visualSearchResultItems;

@end
