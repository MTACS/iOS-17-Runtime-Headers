
@interface PXSearchHomeViewController : PXGadgetUIViewController <PXChangeObserver, UISearchControllerDelegate> {
    PHPhotoLibrary * _photoLibrary;
    PXProgrammaticNavigationDestination * _px_navigationDestination;
    <PXViewControllerEventTracker> * _searchControllerEventTracker;
    PXSearchHomeGadgetDataSourceManager * _searchHomeDataSourceManager;
    PXSharedLibraryStatusProvider * _sharedLibraryStatusProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHPhotoLibrary *photoLibrary;
@property (nonatomic, retain) <PXViewControllerEventTracker> *searchControllerEventTracker;
@property (nonatomic, retain) PXSearchHomeGadgetDataSourceManager *searchHomeDataSourceManager;
@property (nonatomic, retain) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (readonly) Class superclass;

+ (id)_feedbackTapToRadarViewControllerWithAttachmentURLs:(id)arg1;
+ (Class)gadgetSpecClass;

- (void).cxx_destruct;
- (id)_adjustedIndexPaths:(id)arg1 withSection:(unsigned long long)arg2;
- (void)_clearSearchField;
- (void)_configureSearchNavigationBar;
- (void)_handleAnalyticsNotification:(id)arg1;
- (void)_notifyAnalyticsSearchAction:(unsigned long long)arg1;
- (void)_registerNotificationsForAnalytics;
- (void)_reportZeroKeywordsToParsec:(bool)arg1 searchCancelled:(bool)arg2;
- (bool)_scrollToInitialPositionAnimated:(bool)arg1;
- (void)_scrollViewStoppedScrolling;
- (void)_unregisterNotificationsForAnalytics;
- (void)_updateNavigationBarForSharedLibrary;
- (id)_visibleZeroKeywordIndexPaths;
- (void)activateSearchField;
- (void)dealloc;
- (void)didDismissSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)performRecentSearch:(id)arg1;
- (id)photoLibrary;
- (void)ppt_dismissKeyboard;
- (void)ppt_prepareForSearchScrollingTestWithSearchText:(id)arg1 completion:(id /* block */)arg2;
- (void)ppt_prepareForSearchTest:(id /* block */)arg1;
- (void)ppt_prepareZeroKeywordRequest:(id /* block */)arg1;
- (void)presentForSearchHashtag:(id)arg1;
- (void)presentOneYearAgo;
- (void)presentSearchWithTerms:(id)arg1 searchCategories:(id)arg2;
- (void)presentSearchWithText:(id)arg1;
- (void)presentSpotlightSearch:(id)arg1;
- (bool)pu_handleSecondTabTap;
- (id)px_navigationDestination;
- (unsigned long long)routingOptionsForDestination:(id)arg1;
- (long long)scrollAnimationIdentifier;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (bool)searchBarIsActive;
- (id)searchControllerEventTracker;
- (id)searchControllerSearchText;
- (id)searchControllerSearchTokens;
- (id)searchHomeDataSourceManager;
- (bool)searchTabIsSelected;
- (void)selectZeroKeyword:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setSearchControllerEventTracker:(id)arg1;
- (void)setSearchHomeDataSourceManager:(id)arg1;
- (void)setSharedLibraryStatusProvider:(id)arg1;
- (id)sharedLibraryStatusProvider;
- (bool)shouldPreventPlaceholder;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)zeroKeywordGadgetDidScroll:(id)arg1;
- (void)zeroKeywordGadgetsDidReload;

@end
