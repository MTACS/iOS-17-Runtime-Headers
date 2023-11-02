
@interface MRUMediaSuggestionsPushDataSource : NSObject <MRMediaSuggestionControllerDelegate, MRUMediaSuggestionsDataSource> {
    <MRUMediaSuggestionsDataSourceDelegate> * _delegate;
    NSDictionary * _mediaSuggestions;
    MRMediaSuggestionController * _mediaSuggestionsController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MRUMediaSuggestionsDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *mediaSuggestions;
@property (nonatomic, retain) MRMediaSuggestionController *mediaSuggestionsController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)controller:(id)arg1 didFailWithError:(id)arg2;
- (void)controller:(id)arg1 didUpdateSuggestions:(id)arg2;
- (id)delegate;
- (id)init;
- (id)mediaSuggestions;
- (id)mediaSuggestionsController;
- (void)refreshMediaSuggestions;
- (void)setDelegate:(id)arg1;
- (void)setMediaSuggestionsController:(id)arg1;

@end
