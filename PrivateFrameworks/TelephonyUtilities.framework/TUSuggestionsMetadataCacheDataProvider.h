
@interface TUSuggestionsMetadataCacheDataProvider : TUMetadataCacheDataProvider {
    id  _suggestionsContactsObserver;
    NSObject<OS_dispatch_semaphore> * _suggestionsServiceThrottleSemaphore;
}

@property (nonatomic, readonly) id suggestionsContactsObserver;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *suggestionsServiceThrottleSemaphore;

+ (bool)canUseSiriSuggestions;
+ (id)newestSuggestedContactForDestinationID:(id)arg1;
+ (id)sharedService;
+ (bool)shouldQuerySupportsInfo;
+ (id)suggestedNamesForDestinationID:(id)arg1 onlySignificant:(bool)arg2 error:(id*)arg3;
+ (id)suggestedNamesForDestinationID:(id)arg1 onlySignificant:(bool)arg2 supportsInfoLookup:(bool)arg3 error:(id*)arg4;
+ (void)suggestedNamesForDestinationID:(id)arg1 onlySignificant:(bool)arg2 withCompletion:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)init;
- (void)setSuggestionsServiceThrottleSemaphore:(id)arg1;
- (id)suggestionsContactsObserver;
- (id)suggestionsServiceThrottleSemaphore;
- (void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2;

@end
