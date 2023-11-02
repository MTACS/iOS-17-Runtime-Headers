
@interface ATXDefaultHomeScreenItemManager : NSObject {
    NSString * _ambientPath;
    NSString * _homeScreenPath;
    NSObject<OS_dispatch_queue> * _internalQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_JSONCompatible:(id)arg1;
- (bool)_doesBiomeAppLaunchDataGoBackAtLeast20Days;
- (void)_fetchSmartStackOfVariant:(unsigned long long)arg1 localObserver:(int)arg2 completionHandler:(id /* block */)arg3;
- (id)_generateOnboardingStacksForVariant:(unsigned long long)arg1;
- (void)_logFetchedOnboardingStack:(id)arg1;
- (void)_readAmbientUpdateFromFileWithCompletionHandler:(id /* block */)arg1;
- (void)_readHomeScreenUpdateFromFileWithCompletionHandler:(id /* block */)arg1;
- (void)_readUpdateFromFileAtPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_writeUpdate:(id)arg1 atPath:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchDefaultStacksJSONWithCompletionHandler:(id /* block */)arg1;
- (void)fetchGalleryItemsForVariant:(unsigned long long)arg1 gridSize:(unsigned long long)arg2 supportedFamilies:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchSmartStackOfVariant:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchSuggestedGalleryItemsOfGridSize:(unsigned long long)arg1 widgetFamilyMask:(unsigned long long)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)fetchWidgetDiscoverabilityStacks;
- (id)init;
- (id)initWithHomeScreenPath:(id)arg1 ambientPath:(id)arg2;
- (void)writeAmbientUpdate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)writeHomeScreenUpdate:(id)arg1 completionHandler:(id /* block */)arg2;

@end
