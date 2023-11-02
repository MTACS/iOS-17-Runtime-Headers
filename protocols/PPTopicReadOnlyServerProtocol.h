
@protocol PPTopicReadOnlyServerProtocol <PPFeedbackAccepting, PPUniversalSearchSpotlightFeedbackAccepting>

@required

- (void)cachePath:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)rankedTopicsWithQuery:(PPTopicQuery *)arg1 queryId:(unsigned long long)arg2;
- (void)scoresForTopicMapping:(NSString *)arg1 query:(PPTopicQuery *)arg2 queryId:(unsigned long long)arg3;
- (void)topicCacheSandboxExtensionToken:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)topicExtractionsFromText:(NSString *)arg1 queryId:(unsigned long long)arg2;
- (void)topicRecordsWithQuery:(PPTopicQuery *)arg1 queryId:(unsigned long long)arg2;
- (void)unmapMappedTopicIdentifier:(void *)arg1 mappingIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@end
