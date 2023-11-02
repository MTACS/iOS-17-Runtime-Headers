
@interface VUIMediaEntityFetchResponseChangesOperation : VUIAsynchronousOperation {
    NSArray * _currentFetchResponses;
    NSError * _error;
    NSArray * _fetchResponseChanges;
    NSArray * _latestFetchResponses;
}

@property (nonatomic, copy) NSArray *currentFetchResponses;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, copy) NSArray *fetchResponseChanges;
@property (nonatomic, copy) NSArray *latestFetchResponses;

+ (id)_changeSetFromCurrentMediaEntities:(id)arg1 toLatestMediaEntities:(id)arg2;

- (void).cxx_destruct;
- (id)_groupingChangeSetWithCurrentGrouping:(id)arg1 latestGrouping:(id)arg2;
- (id)_groupingChangeSetWithLatestFetchResponse:(id)arg1 currentFetchResponse:(id)arg2;
- (id)_mediaEntitiesChangeSetWithLatestFetchResponse:(id)arg1 currentFetchResponse:(id)arg2;
- (void)_preloadMediaEntityMetadata;
- (void)_preloadMetadataForFetchResponse:(id)arg1;
- (id)currentFetchResponses;
- (id)error;
- (void)executionDidBegin;
- (id)fetchResponseChanges;
- (id)init;
- (id)initWithLatestFetchResponses:(id)arg1 currentFetchResponses:(id)arg2;
- (id)latestFetchResponses;
- (void)setCurrentFetchResponses:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFetchResponseChanges:(id)arg1;
- (void)setLatestFetchResponses:(id)arg1;

@end
