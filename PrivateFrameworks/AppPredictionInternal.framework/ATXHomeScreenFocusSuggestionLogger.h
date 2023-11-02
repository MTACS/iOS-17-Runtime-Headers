
@interface ATXHomeScreenFocusSuggestionLogger : NSObject {
    ATXBiomeSuggestedHomePageStream * _stream;
    NSURL * _suggestedHomePageStreamBookmarkURLPath;
}

@property (nonatomic, retain) ATXBiomeSuggestedHomePageStream *stream;
@property (nonatomic, retain) NSURL *suggestedHomePageStreamBookmarkURLPath;

- (void).cxx_destruct;
- (id)generateSuggestedHomePageStreamBookmark;
- (id)generateSuggestedHomePageStreamBookmarkURLPath;
- (id)init;
- (void)logHomeScreenFocusSuggestionMetrics;
- (void)setStream:(id)arg1;
- (void)setSuggestedHomePageStreamBookmarkURLPath:(id)arg1;
- (id)stream;
- (id)suggestedHomePageStreamBookmarkURLPath;
- (void)writeBookmarkToFile:(id)arg1;

@end
