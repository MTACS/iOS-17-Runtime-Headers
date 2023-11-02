
@interface LibraryConfiguration : NSObject {
    <BookmarksNavigationControllerDelegate> * _bookmarksNavigationControllerDelegate;
    <DownloadOpenHandler> * _downloadOpenHandler;
    <LibraryItemOpenHandler> * _libraryItemOpenHandler;
    <LinkPreviewProvider> * _linkPreviewProvider;
    <_SFNavigationIntentHandling> * _navigationIntentHandler;
    PinnedTabsManager * _pinnedTabsManager;
    <TabGroupProvider> * _tabGroupProvider;
}

@property (nonatomic) <BookmarksNavigationControllerDelegate> *bookmarksNavigationControllerDelegate;
@property (nonatomic) <DownloadOpenHandler> *downloadOpenHandler;
@property (nonatomic) <LibraryItemOpenHandler> *libraryItemOpenHandler;
@property (nonatomic) <LinkPreviewProvider> *linkPreviewProvider;
@property (nonatomic) <_SFNavigationIntentHandling> *navigationIntentHandler;
@property (nonatomic) PinnedTabsManager *pinnedTabsManager;
@property (nonatomic) <TabGroupProvider> *tabGroupProvider;

- (void).cxx_destruct;
- (id)bookmarksNavigationControllerDelegate;
- (id)downloadOpenHandler;
- (id)libraryItemOpenHandler;
- (id)linkPreviewProvider;
- (id)navigationIntentHandler;
- (id)pinnedTabsManager;
- (void)setBookmarksNavigationControllerDelegate:(id)arg1;
- (void)setDownloadOpenHandler:(id)arg1;
- (void)setLibraryItemOpenHandler:(id)arg1;
- (void)setLinkPreviewProvider:(id)arg1;
- (void)setNavigationIntentHandler:(id)arg1;
- (void)setPinnedTabsManager:(id)arg1;
- (void)setTabGroupProvider:(id)arg1;
- (id)tabGroupProvider;

@end
