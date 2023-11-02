
@interface MapsSuggestionsRelevanceScorer : NSObject {
    NSMutableArray * _scorers;
    NSDate * _scorersUpdatedAt;
}

- (void).cxx_destruct;
- (void)addScorer:(id)arg1;
- (id)confidenceForContacts:(id)arg1 addresses:(id)arg2;
- (id)confidenceForMapItems:(id)arg1;
- (id)init;
- (void)preLoadAllScorers;

@end
