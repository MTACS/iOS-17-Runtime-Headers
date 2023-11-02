
@interface MapsSuggestionsFwdGeocodingRelevanceScoreProvider : NSObject <MapsSuggestionsRelevanceScoreProvider> {
    <MapsSuggestionsNetworkRequester> * _networkRequester;
    <MapsSuggestionsRelevanceScoreProvider> * _wrappedScoreProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (id)initDecoratingRelevanceScoreProvider:(id)arg1 networkRequester:(id)arg2;
- (void)preLoad;
- (bool)relevanceScoreForNames:(id)arg1 addresses:(id)arg2 mapItems:(id)arg3 completion:(id /* block */)arg4;
- (id)uniqueName;

@end
