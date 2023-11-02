
@protocol MapsSuggestionsMapsSyncConnector <MapsSuggestionsObject>

@required

- (<MapsSyncReviewedPlace> *)MapsSyncReviewedPlace_fetchWithMuids:(NSArray *)arg1;
- (bool)allContentOfType:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (<MapsSuggestionsMapsSyncConnectorDelegate> *)delegate;
- (<MapsSyncReviewedPlace> *)newReviewedPlace;
- (void)setDelegate:(id <MapsSuggestionsMapsSyncConnectorDelegate>)arg1;

@end
