
@interface ATXSuggestedPagesHomeScreenModificationsMetricsLogger : NSObject {
    NSArray * _acceptedEventTypes;
    ATXBMBookmark * _atxBookmark;
    NSURL * _bookmarkURLPath;
    ATXUniversalBiomeUIStream * _stream;
}

@property (nonatomic, retain) NSArray *acceptedEventTypes;
@property (nonatomic, retain) ATXBMBookmark *atxBookmark;
@property (nonatomic, retain) NSURL *bookmarkURLPath;
@property (nonatomic, retain) ATXUniversalBiomeUIStream *stream;

- (void).cxx_destruct;
- (id)acceptedEventTypes;
- (id)atxBookmark;
- (id)bookmarkURLPath;
- (id)generateBookmark;
- (id)generateBookmarkURLPath;
- (id)init;
- (id)initWithStream:(id)arg1 bookmarkURLPath:(id)arg2;
- (long long)logMetrics;
- (void)setAcceptedEventTypes:(id)arg1;
- (void)setAtxBookmark:(id)arg1;
- (void)setBookmarkURLPath:(id)arg1;
- (void)setStream:(id)arg1;
- (id)stream;
- (void)writeBookmarkToFile:(id)arg1;

@end
