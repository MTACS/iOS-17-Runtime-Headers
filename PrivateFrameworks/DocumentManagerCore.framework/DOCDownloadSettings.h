
@interface DOCDownloadSettings : NSObject {
    FPItem * _currentDefaultDownloadsLocationItem;
    NSArray * _providers;
    id  _providersObserverContext;
    NSError * _providersObserverError;
}

@property (retain) FPItem *currentDefaultDownloadsLocationItem;
@property (retain) NSArray *providers;
@property (retain) id providersObserverContext;
@property (retain) NSError *providersObserverError;

- (void).cxx_destruct;
- (void)_createDefaultDownloadsFolderInParent:(id)arg1 completion:(id /* block */)arg2;
- (id)_createErrorForCode:(long long)arg1 localizedDescription:(id)arg2 underlyingError:(id)arg3;
- (void)_fetchAvailableProviders:(id /* block */)arg1;
- (void)_fetchDefaultFallbackDownloadLocationWithPreferredDomain:(id)arg1 completion:(id /* block */)arg2;
- (void)_fetchProviders:(id /* block */)arg1;
- (void)_preferredProvidersIn:(id)arg1 completion:(id /* block */)arg2;
- (void)_removeCurrentDownloadsLocationFromFavorites;
- (void)_rootItemOfPreferredProviderInDomains:(id)arg1 completion:(id /* block */)arg2;
- (bool)_saveDownloadFolderItem:(id)arg1 error:(id*)arg2;
- (void)_validatePreferredProvider:(id)arg1 completion:(id /* block */)arg2;
- (id)currentDefaultDownloadsLocationItem;
- (void)fetchDefaultDownloadsLocationItem:(id /* block */)arg1;
- (void)fetchProvidersSuitableForDownloads:(id /* block */)arg1;
- (id)init;
- (id)providers;
- (id)providersObserverContext;
- (id)providersObserverError;
- (void)resetDefaultDownloadsLocationItem;
- (void)setCurrentDefaultDownloadsLocationItem:(id)arg1;
- (void)setDefaultDownloadsItemForProviderDomain:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDefaultDownloadsLocationItem:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setProviders:(id)arg1;
- (void)setProvidersObserverContext:(id)arg1;
- (void)setProvidersObserverError:(id)arg1;

@end
