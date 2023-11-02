
@interface SPUIViewController : UIViewController <SFFeedbackListener, SPUIResultsViewDelegate, SearchUICommandDelegate, SearchUIResultsViewDelegate> {
    <SPUIViewControllerDelegate> * _delegate;
    bool  _isInStateRestoration;
    SPUIResultsViewController * _searchResultViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SPUIViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isInStateRestoration;
@property (retain) SPUIResultsViewController *searchResultViewController;
@property (readonly) Class superclass;

+ (bool)isFeedbackSelector:(SEL)arg1;

- (void).cxx_destruct;
- (void)activateViewController:(id)arg1 animate:(bool)arg2;
- (id)activeViewController;
- (id)contentScrollView;
- (id)currentQuery;
- (id)delegate;
- (void)didTapInEmptyRegion;
- (void)didUpdateActiveViewController;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (bool)isActiveViewController:(id)arg1;
- (bool)isInStateRestoration;
- (bool)respondsToSelector:(SEL)arg1;
- (id)searchResultViewController;
- (void)setDelegate:(id)arg1;
- (void)setIsInStateRestoration:(bool)arg1;
- (void)setSearchResultViewController:(id)arg1;
- (id)viewControllerForPresenting;
- (void)willUpdateActiveViewController;
- (void)willUpdateFromResultsWithHighlightedResult:(id)arg1 viewController:(id)arg2;

@end
