
@interface WBSWebProcessPlugIn : NSObject <WKWebProcessPlugIn> {
    NSMapTable * _browserContextControllersToWebProcessPlugInPageControllers;
    WKWebProcessPlugInController * _plugInController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) WBSSearchProvider *defaultSearchProvider;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long parsecABGroupIdentifier;
@property (getter=isParsecABTestingEnabled, nonatomic, readonly) bool parsecABTestingEnabled;
@property (nonatomic, readonly) WKWebProcessPlugInController *plugInController;
@property (nonatomic, readonly) NSArray *searchEnginesForRedirectToSafeSearch;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)defaultSearchProvider;
- (void)didCreatePageController:(id)arg1 forBrowserContextController:(id)arg2;
- (bool)isParsecABTestingEnabled;
- (id)pageControllerWithBrowserContextController:(id)arg1;
- (unsigned long long)parsecABGroupIdentifier;
- (id)plugInController;
- (id)searchEnginesForRedirectToSafeSearch;
- (void)webProcessPlugIn:(id)arg1 didCreateBrowserContextController:(id)arg2;
- (void)webProcessPlugIn:(id)arg1 initializeWithObject:(id)arg2;
- (void)webProcessPlugIn:(id)arg1 willDestroyBrowserContextController:(id)arg2;
- (void)willDestroyPageController:(id)arg1 forBrowserContextController:(id)arg2;

@end
