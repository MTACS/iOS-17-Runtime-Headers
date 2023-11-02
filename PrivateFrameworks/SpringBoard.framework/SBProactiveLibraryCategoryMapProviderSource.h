
@interface SBProactiveLibraryCategoryMapProviderSource : NSObject <SBHLibraryCategoryMapProviderSource> {
    ATXAppDirectoryClient * _appDirectoryClient;
    <SBHLibraryCategoryMapProviderSourceDelegate> * _delegate;
    NSArray * _lastKnownGoodRecentApps;
    NSArray * _lastKnownGoodSuggestions;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBHLibraryCategoryMapProviderSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *sourceName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)handleUpdateCategoriesNotification:(id)arg1;
- (id)init;
- (void)requestLibraryCategoryMapWithOptions:(unsigned long long)arg1 existingLibraryCategoryMap:(id)arg2 forbiddenApplicationIdentifiers:(id)arg3 sessionId:(unsigned long long)arg4 queue:(id)arg5 completion:(id /* block */)arg6;
- (void)setDelegate:(id)arg1;
- (id)sourceName;

@end
