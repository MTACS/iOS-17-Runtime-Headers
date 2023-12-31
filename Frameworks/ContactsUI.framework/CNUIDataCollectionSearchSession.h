
@interface CNUIDataCollectionSearchSession : NSObject {
    bool  _pendingResults;
    bool  _pendingSuggestionsResults;
}

@property (nonatomic) bool pendingResults;
@property (nonatomic) bool pendingSuggestionsResults;

+ (void)begin;
+ (id)currentSession;
+ (void)end;

- (void)didFetchResultSuggested:(bool)arg1;
- (void)didSelectResult:(id)arg1;
- (bool)pendingResults;
- (bool)pendingSuggestionsResults;
- (void)searchStringDidChange;
- (void)setPendingResults:(bool)arg1;
- (void)setPendingSuggestionsResults:(bool)arg1;

@end
