
@interface CNAutocompleteSearchObservableProvider : NSObject <CNAutocompleteSearchObservableProvider> {
    CNAutocompleteFetchRequest * _fetchRequest;
    NSObject<OS_os_log> * _log;
    <CNScheduler> * _scheduler;
    <CNAutocompleteSearchProvider> * _searchProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CNAutocompleteFetchRequest *fetchRequest;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, readonly) <CNScheduler> *scheduler;
@property (nonatomic, readonly) <CNAutocompleteSearchProvider> *searchProvider;
@property (readonly) Class superclass;

+ (id)providerWithSearchProvider:(id)arg1 fetchRequest:(id)arg2 scheduler:(id)arg3;

- (void).cxx_destruct;
- (id)calendarServersSearchObservable;
- (id)directoryServersSearchObservable;
- (id)fetchRequest;
- (id)initWithSearchProvider:(id)arg1 fetchRequest:(id)arg2 scheduler:(id)arg3;
- (id)localExtensionSearchObservables;
- (id)localSearchObservable;
- (id)log;
- (id)observableWithWrappedSearchProviderGetter:(id /* block */)arg1 name:(id)arg2;
- (id)predictionsSearchObservableWithUnfilteredResultPromise:(id)arg1;
- (id)recentsSearchObservable;
- (id)scheduler;
- (id)searchProvider;
- (bool)shouldAllowPredictionSearchToSourceResults;
- (id)stewieSearchObservable;
- (id)suggestionsSearchObservable;

@end
