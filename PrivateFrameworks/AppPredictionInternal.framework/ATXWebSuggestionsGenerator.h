
@interface ATXWebSuggestionsGenerator : NSObject {
    ATXVerticalModelsCache * _cache;
}

- (void).cxx_destruct;
- (id)dedupedUrlsFromUrls:(id)arg1 limit:(unsigned long long)arg2;
- (id)init;
- (void)overwriteWebsitePredictionsCacheWithWebsiteString:(id)arg1 contextType:(id)arg2;
- (void)refreshWebsitePredictions;
- (id)rootUrlFromUrl:(id)arg1;
- (id)urlToDatesGivenWebpageHistory:(id)arg1;
- (id)webpageHistory;
- (id)webpageTitlesAndSubtitles;
- (id)webpageTitlesAndSubtitlesGivenWebpageHistory:(id)arg1;
- (id)websitePredictionsForAllContexts;
- (id)websitePredictionsForContextType:(id)arg1 limit:(unsigned long long)arg2;

@end
