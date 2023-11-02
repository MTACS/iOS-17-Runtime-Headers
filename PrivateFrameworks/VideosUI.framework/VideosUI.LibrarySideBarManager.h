
@interface VideosUI.LibrarySideBarManager : NSObject <VUILibraryDataSourceDelegate> {
    void $__lazy_storage_$_downloadItem;
    void $__lazy_storage_$_promptItems;
    void cachedLibraryCategoriesLoaded;
    void categoryForRebase;
    void categorylessRebase;
    void delegate;
    void deviceMediaLibrary;
    void forcedUpdate;
    void genresController;
    void initialFetchFinished;
    void libraryMenuDataSource;
    void libraryOnly;
    void libraryViewController;
    void menuDataSourceBarItems;
    void promptCategories;
    void rebaseFromLibraryViewController;
    void stopped;
    void visibleBarItems;
}

- (void).cxx_destruct;
- (void)accountsChanged:(id)arg1;
- (void)dataSourceDidFinishFetching:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)isLibraryOnlyCountryChanged:(id)arg1;
- (void)networkReachabilityDidChange:(id)arg1;

@end
