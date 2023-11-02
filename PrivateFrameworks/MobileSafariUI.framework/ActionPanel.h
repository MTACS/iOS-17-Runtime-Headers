
@interface ActionPanel : _SFActivityViewController <AddBookmarkActivityDelegate, _SFActivityDelegate> {
    <AddBookmarkActivityDelegate> * _activityDelegate;
    bool  _containsDownloadsActivity;
    long long  _menuStyle;
    ReloadActivity * _reloadActivity;
    TabDocument * _tabDocument;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ActionPanelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TabDocument *tabDocument;

+ (id)createActivityItemProviderCollectionForTabDocument:(id)arg1;

- (void).cxx_destruct;
- (void)_executeActivity;
- (void)_performActivity:(id)arg1;
- (void)_prepareActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)_prepareMail:(id)arg1 completion:(id /* block */)arg2;
- (void)_preparePostToSocialNetwork:(id)arg1;
- (void)_reload;
- (void)activityDidComplete:(id)arg1 withReturnedItems:(id)arg2 success:(bool)arg3;
- (bool)addBookmarkActivityCanSaveBookmarkChanges:(id)arg1;
- (void)addBookmarkActivityFailedToAcquireBookmarkLock:(id)arg1;
- (id)addBookmarkActivityTabGroupProvider;
- (id)downloadsViewController;
- (id)excludedActivityTypes;
- (id)initWithTabDocument:(id)arg1 activityDelegate:(id)arg2 menuStyle:(long long)arg3;
- (bool)isContentObscuredByDigitalHealthForCustomizationController:(id)arg1;
- (bool)isDisplayingQuickLookDocumentForCustomizationController:(id)arg1;
- (bool)isReaderAvailableForCustomizationController:(id)arg1;
- (bool)isShowingReaderForCustomizationController:(id)arg1;
- (long long)provenanceForSafariActivity:(id)arg1;
- (void)setSharingURL:(id)arg1;
- (id)tabDocument;
- (void)updateReloadActivity;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)webViewForCustomizationController:(id)arg1;

@end
